use proc_macro2::TokenStream;
use quote::{format_ident, quote, ToTokens};
use syn::parse_macro_input;

use crate::Shared::{Argument::Argument_type, Function::Function_type};

pub(crate) fn Bind_function_WASM(
    _Attributes: proc_macro::TokenStream,
    Item: proc_macro::TokenStream,
) -> proc_macro::TokenStream {
    let Module_name = "host";

    let Function = Function_type::New(parse_macro_input!(Item as syn::ItemFn));

    let Binding_identifier = Function.Get_binding_identifier().to_string();

    let Signature = Function.Get_signature();

    let Arguments = Function.Get_arguments();

    let (FFI_arguments, Castings) = Get_to_FFI(&Arguments);

    let Parameters = FFI_arguments
        .iter()
        .map(|Argument| Argument.Get_identifier());

    let Return_identifier = format_ident!("__Result");

    let (Return_type, Return_type_cast) = Function.Get_return_type_from_FFI(&Return_identifier);

    if Function.Get_body().into_token_stream().to_string() != "{}" {
        panic!("Please do not provide a body for the function {:?} since it will be replaced by the FFI call (example : fn foo(bar : &str) -> u8 {{}})", Function.Get_identifier().to_string());
    }

    quote! {
            #[allow(clippy::too_many_arguments)]
            pub #Signature {
                // - Castings : let a = b as c;
                #(#Castings)*
                // - FFI function declaration
                // - - If the target is WASM, then the function is imported from the host module
                #[cfg(target_arch = "wasm32")]
                #[link(wasm_import_module = #Module_name)]  // Set the module name
                extern "C" {
                #[link_name = #Binding_identifier]  // Set the function name
                #[allow(clippy::too_many_arguments)]
                fn __wasm_import(
                    #(#FFI_arguments),*
                ) #Return_type;
                }
                // - - If the target is not WASM, then the function is marked as unimplemented
                #[cfg(not(target_arch = "wasm32"))]
                #[allow(clippy::too_many_arguments)]
                unsafe fn __wasm_import(
                    #(#FFI_arguments),*
                ) #Return_type {
                    unimplemented!()
                }
                // - Call the FFI function
                let #Return_identifier = unsafe { __wasm_import(
                    #(#Parameters),*
                ) };

                #Return_type_cast

                #Return_identifier
            }
    }
    .into()
}

pub fn Get_to_FFI(Arguments: &[Argument_type]) -> (Vec<Argument_type>, Vec<TokenStream>) {
    let mut Castings: Vec<TokenStream> = vec![];
    let mut FFI_Arguments: Vec<Argument_type> = vec![];

    for Argument in Arguments {
        FFI_Arguments.push(Argument.Get_FFI_argument_WASM());

        if let Some((Size_argument, Size_cast)) = Argument.Get_size_argument() {
            FFI_Arguments.push(Size_argument);
            Castings.push(Size_cast);
        }

        Castings.push(Argument.Get_cast_to_FFI());
    }

    (FFI_Arguments, Castings)
}
