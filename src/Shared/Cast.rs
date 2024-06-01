use proc_macro2::TokenStream;
use quote::{quote, ToTokens};
use syn::Ident;

use super::Get_size_argument_identifier;

pub fn Get_to_FFI(
    Identifier: &Ident,
    Current_type: &syn::Type,
    Destination_type: &syn::Type,
) -> TokenStream {
    match Current_type {
        syn::Type::Reference(Type_reference) => {
            let Mutable = Type_reference.mutability.is_some();
            match &*Type_reference.elem {
                syn::Type::Slice(_) => {
                    // - &mut [T] -> *mut T
                    if Mutable {
                        quote! {
                            let #Identifier = #Identifier.as_mut_ptr();
                        }
                    }
                    // - &[T] -> *const T
                    else {
                        quote! {
                            let #Identifier = #Identifier.as_ptr();
                        }
                    }
                }
                syn::Type::Path(Type_path) => {
                    if Type_path.path.to_token_stream().to_string() == "str" {
                        // - &mut str -> unimplemented
                        if Mutable {
                            todo!("Mutable str type is not yet supported in FFI bindings");
                        }
                        // - &str -> *const u8
                        else {
                            quote! {
                                let #Identifier = #Identifier.as_ptr();
                            }
                        }
                    }
                    // - &mut T -> *mut T
                    else if Mutable {
                        quote! {
                            let #Identifier = #Identifier as *mut _;
                        }
                    }
                    // - &T -> *const T
                    else {
                        quote! {
                            let #Identifier = #Identifier as *const _;
                        }
                    }
                }
                Type => panic!(
                    "Unsupported type in FFI bindings {:?}",
                    Type.to_token_stream().to_string()
                ),
            }
        }
        // - Primitive type -> WASM type
        syn::Type::Path(_) => quote! { let #Identifier = #Identifier as #Destination_type; },
        Type => panic!(
            "Unsupported type in FFI bindings {:?}",
            Type.to_token_stream().to_string()
        ),
    }
}

// TODO : Replace unwrap() with proper error handling (Kill instance if error occurs)
pub fn Get_from_FFI(Identifier: &Ident, Current_type: &syn::Type) -> TokenStream {
    let Size_identifier = Get_size_argument_identifier(Identifier);
    match Current_type {
        syn::Type::Reference(Type_reference) => {
            let Mutable = Type_reference.mutability.is_some();
            match &*Type_reference.elem {
                syn::Type::Slice(_) => {
                    // - &mut [T] -> unimplemente
                    if Mutable {
                        quote! {
                            let #Identifier : #Current_type = Environment.Convert_to_native_mutable_slice(#Identifier, #Size_identifier).unwrap();
                        }
                    } else {
                        quote! {
                            let #Identifier : #Current_type = Environment.Convert_to_native_slice(#Identifier, #Size_identifier).unwrap();
                        }
                    }
                }
                syn::Type::Path(Type_path) => {
                    if Type_path.path.to_token_stream().to_string() == "str" {
                        // - &mut str -> unimplemented
                        if Mutable {
                            unimplemented!("Mutable str type is not supported in FFI bindings");
                        }
                        // - &str -> *const u8
                        else {
                            quote! {
                                let #Identifier = Environment.Convert_to_native_string(#Identifier, #Size_identifier).unwrap();
                            }
                        }
                    }
                    // - &mut T -> *mut T
                    else if Mutable {
                        quote! {
                            let #Identifier : #Current_type = Environment.Convert_to_native_mutable_reference(#Identifier).unwrap();
                        }
                    }
                    // - &T -> *const T
                    else {
                        quote! {
                            let #Identifier : #Current_type = Environment.Convert_to_native_reference(#Identifier).unwrap();
                        }
                    }
                }
                Type => panic!(
                    "Unsupported type in FFI bindings {:?}",
                    Type.to_token_stream().to_string()
                ),
            }
        }
        syn::Type::Path(Type_path) => match Type_path.path.to_token_stream().to_string().as_str() {
            "bool" => quote! {
                let #Identifier = #Identifier != 0;
            },
            _ => quote! {
                let #Identifier = #Identifier as #Current_type;
            },
        },

        Type => panic!(
            "Unsupported type in FFI bindings {:?}",
            Type.to_token_stream().to_string()
        ),
    }
}
