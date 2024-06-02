use std::{fs::OpenOptions, io::Write};

use proc_macro2::TokenStream;
use quote::{format_ident, quote, ToTokens};
use syn::{parse_macro_input, punctuated::Punctuated, token::Comma, Meta};

use crate::Shared::{Argument::Argument_type, Function::Function_type};

pub(crate) fn Bind_function_native(
    Attributes: proc_macro::TokenStream,
    Item: proc_macro::TokenStream,
) -> proc_macro::TokenStream {
    let Attributes =
        parse_macro_input!(Attributes with Punctuated::<Meta, Comma>::parse_terminated);

    let Function = Function_type::New(parse_macro_input!(Item as syn::ItemFn));

    let Binding_identifier = Function.Get_binding_identifier();

    let Body = Function.Get_body();

    let Arguments = Function.Get_arguments();

    let (FFI_arguments, Castings) = Get_from_FFI(&Arguments);

    let Return_identifier = format_ident!("__Result");

    let Return_type = Function.Get_return_type();

    let (FFI_Return_type, Return_type_cast) = Function.Get_return_type_to_FFI(&Return_identifier);

    let Prefix = Get_prefix(Attributes).unwrap_or("host".to_string());

    if let Ok(Value) = std::env::var("Binding_tool_write_file") {
        if Value == "1" {
            Create_binding_directory();
            Write_binding_file(&Function, &Prefix);
        }
    }

    quote! {
            #[allow(clippy::too_many_arguments)]
            extern "C" fn #Binding_identifier (
                Environment : Virtual_machine::Environment_pointer_type,
                #(#FFI_arguments),*
            ) #FFI_Return_type

             {
                // - Castings : let a = b as c;
                let Environment = Virtual_machine::Environment_type::From_raw_pointer(Environment).unwrap();
                #(#Castings)*

                // - Internal function
                let mut __Internal_closure = || #Return_type
                #Body
                ;

                // - Function call
                let #Return_identifier = __Internal_closure();

                // - Return type cast
                #Return_type_cast

                #Return_identifier
            }
    }
    .into()
}

fn Get_prefix(Attributes: Punctuated<Meta, Comma>) -> Option<String> {
    for Attribute in Attributes {
        if let Meta::NameValue(Name_value) = Attribute {
            if Name_value.path.to_token_stream().to_string() == "Prefix" {
                if let syn::Expr::Lit(Literal) = Name_value.value {
                    if let syn::Lit::Str(String) = Literal.lit {
                        return Some(String.value());
                    }
                }
            }
        }
    }

    None
}

fn Get_from_FFI(Arguments: &[Argument_type]) -> (Vec<Argument_type>, Vec<TokenStream>) {
    let mut Castings: Vec<TokenStream> = vec![];
    let mut FFI_Arguments: Vec<Argument_type> = vec![];

    for Argument in Arguments {
        FFI_Arguments.push(Argument.Get_FFI_argument_native());

        if let Some((Size_argument, _)) = Argument.Get_size_argument() {
            FFI_Arguments.push(Size_argument);
        }

        Castings.push(Argument.Get_cast_from_FFI());
    }

    (FFI_Arguments, Castings)
}

fn Get_binding_directory_path() -> std::path::PathBuf {
    std::env::temp_dir().join("Binding_tool").join("src")
}

fn Create_binding_directory() {
    std::fs::create_dir_all(Get_binding_directory_path()).unwrap();
}

fn Write_binding_file(Function: &Function_type, Prefix: &str) {
    let Binding_file_path = Get_binding_directory_path().join(Prefix.to_string() + ".rs");

    let mut File = OpenOptions::new()
        .append(true)
        .open(Binding_file_path)
        .unwrap();

    let Signature = Function.Get_signature();

    let Content = quote! {

        #[Binding_tool::Bind_function_WASM]
        pub #Signature {}
    };

    File.write_all(Content.to_string().as_bytes()).unwrap();

    File.write_all("\n".as_bytes()).unwrap();
    File.write_all("\n".as_bytes()).unwrap();
}
