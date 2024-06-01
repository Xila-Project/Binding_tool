use proc_macro2::TokenStream;
use quote::format_ident;
use syn::{parse_quote, Ident, ItemFn, ReturnType};

use super::{Argument::Argument_type, Cast, Type};

pub struct Function_type {
    Function: ItemFn,
}

impl Function_type {
    pub fn New(Item: ItemFn) -> Self {
        Self { Function: Item }
    }

    pub fn Get_identifier(&self) -> &Ident {
        &self.Function.sig.ident
    }

    pub fn Get_binding_identifier(&self) -> syn::Ident {
        format_ident!("{}_binding", &self.Function.sig.ident)
    }

    pub fn Get_signature(&self) -> &syn::Signature {
        &self.Function.sig
    }

    pub fn Get_arguments(&self) -> Vec<Argument_type> {
        self.Function
            .sig
            .inputs
            .clone()
            .into_iter()
            .map(|Argument_type| match Argument_type {
                syn::FnArg::Receiver(_) => unimplemented!("Self is not supported in FFI bindings."),
                syn::FnArg::Typed(Typed_function_argument) => {
                    Argument_type::New(Typed_function_argument)
                }
            })
            .collect()
    }

    pub fn Get_return_type(&self) -> &syn::ReturnType {
        &self.Function.sig.output
    }

    pub fn Get_body(&self) -> &syn::Block {
        &self.Function.block
    }

    pub fn Get_return_type_to_FFI(&self, Identifier: &Ident) -> (ReturnType, Option<TokenStream>) {
        match self.Get_return_type() {
            syn::ReturnType::Default => (ReturnType::Default, None),
            syn::ReturnType::Type(_, Current_type) => {
                let FFI_type = Type::Convert_to_WASM(Current_type);

                let Cast = Cast::Get_to_FFI(Identifier, Current_type, &FFI_type);

                let FFI_return_type: ReturnType = parse_quote!(-> #FFI_type);

                (FFI_return_type, Some(Cast))
            }
        }
    }

    pub fn Get_return_type_from_FFI(
        &self,
        Identifier: &Ident,
    ) -> (ReturnType, Option<TokenStream>) {
        match self.Get_return_type() {
            syn::ReturnType::Default => (ReturnType::Default, None),
            syn::ReturnType::Type(_, Current_type) => {
                let FFI_type = Type::Convert_to_FFI(Current_type);

                let Cast = Cast::Get_from_FFI(Identifier, Current_type);

                let FFI_return_type: ReturnType = parse_quote!(-> #FFI_type);

                (FFI_return_type, Some(Cast))
            }
        }
    }
}
