use proc_macro2::TokenStream;
use quote::{quote, ToTokens};
use syn::{parse_quote, Ident, PatType};

use crate::Shared::{Cast, Type};

use super::Get_size_argument_identifier;

pub(crate) struct Argument_type(PatType);

impl Argument_type {
    pub fn New(Typed_function_argument: PatType) -> Self {
        Self(Typed_function_argument)
    }

    pub fn Get_identifier(&self) -> &Ident {
        match &*self.0.pat {
            syn::Pat::Ident(pat_ident) => &pat_ident.ident,
            _ => unimplemented!("Pattern : {:?}", self.0.pat.to_token_stream().to_string()),
        }
    }

    pub fn Get_type(&self) -> &syn::Type {
        &self.0.ty
    }

    pub fn Get_FFI_argument_WASM(&self) -> Self {
        let FFI_type = Type::Convert_to_FFI(self.Get_type());
        let Identifier = self.Get_identifier();

        // Shadowing the original argument with the FFI argument type
        let FFI_argument = parse_quote! {
                #Identifier : #FFI_type
        };

        Self(FFI_argument)
    }

    pub fn Get_FFI_argument_native(&self) -> Self {
        let FFI_type = Type::Convert_to_WASM(self.Get_type());
        let Identifier = self.Get_identifier();

        // Shadowing the original argument with the FFI argument type
        let FFI_argument = parse_quote! {
                #Identifier : #FFI_type
        };

        Self(FFI_argument)
    }

    pub fn Get_size_argument(&self) -> Option<(Self, TokenStream)> {
        if self.Is_size_needed() {
            let Identifier = self.Get_identifier();
            let Size_identifier = Get_size_argument_identifier(Identifier);
            let Size_argument = parse_quote! ( #Size_identifier : u32 );

            let Size_cast = quote! {
                let #Size_identifier = #Identifier.len() as u32;
            };

            Some((Self(Size_argument), Size_cast))
        } else {
            None
        }
    }

    fn Is_size_needed(&self) -> bool {
        match self.Get_type() {
            syn::Type::Reference(Type_reference) => match &*Type_reference.elem {
                syn::Type::Slice(_) => true,
                syn::Type::Path(Type_path) => {
                    let first_segment = Type_path.path.segments.first().unwrap().ident.to_string();
                    first_segment == "str"
                }
                _ => false,
            },
            _ => false,
        }
    }

    pub fn Get_cast_to_FFI(&self) -> TokenStream {
        Cast::Get_to_FFI(
            self.Get_identifier(),
            self.Get_type(),
            &Type::Convert_to_FFI(self.Get_type()),
        )
    }

    pub fn Get_cast_from_FFI(&self) -> TokenStream {
        Cast::Get_from_FFI(self.Get_identifier(), self.Get_type())
    }
}

impl ToTokens for Argument_type {
    fn to_tokens(&self, tokens: &mut TokenStream) {
        self.0.to_tokens(tokens)
    }
}
