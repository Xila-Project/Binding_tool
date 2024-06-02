use proc_macro2::TokenStream;
use quote::{format_ident, quote};
use syn::parse_macro_input;

use crate::Shared::{Argument::Argument_type, Function::Function_type};

pub(crate) fn Bind_function_native(
    _Attributes: proc_macro::TokenStream,
    Item: proc_macro::TokenStream,
) -> proc_macro::TokenStream {
    let Function = Function_type::New(parse_macro_input!(Item as syn::ItemFn));

    let Binding_identifier = Function.Get_binding_identifier();

    let Body = Function.Get_body();

    let Arguments = Function.Get_arguments();

    let (FFI_arguments, Castings) = Get_from_FFI(&Arguments);

    let Return_identifier = format_ident!("__Result");

    let Return_type = Function.Get_return_type();

    let (FFI_Return_type, Return_type_cast) = Function.Get_return_type_to_FFI(&Return_identifier);

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

pub fn Get_from_FFI(Arguments: &[Argument_type]) -> (Vec<Argument_type>, Vec<TokenStream>) {
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
