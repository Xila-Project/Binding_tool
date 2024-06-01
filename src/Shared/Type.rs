use quote::ToTokens;
use syn::parse_quote;

pub fn Convert_to_WASM(Current_type: &syn::Type) -> syn::Type {
    match Current_type {
        syn::Type::Reference(Type_reference) => match &*Type_reference.elem {
            syn::Type::Slice(Type_slice) => {
                match &*Type_slice.elem {
                    syn::Type::Path(Type_path) => &Type_path.path,
                    Type => {
                        unimplemented!("For slice type : {:?}", Type.to_token_stream().to_string())
                    }
                };

                parse_quote!(u32)
            }
            syn::Type::Path(_) => {
                parse_quote!(u32)
            }
            Type => unimplemented!(
                "For reference type : {:?}",
                Type.to_token_stream().to_string()
            ),
        },
        syn::Type::Path(Type_path) => Convert_to_FFI_primitive(Type_path),
        Type => unimplemented!("For type : {:?}", Type.to_token_stream().to_string()),
    }
}

pub fn Convert_to_FFI(Current_type: &syn::Type) -> syn::Type {
    match Current_type {
        syn::Type::Reference(Type_reference) => match &*Type_reference.elem {
            syn::Type::Slice(Type_slice) => {
                let path = match &*Type_slice.elem {
                    syn::Type::Path(Type_path) => &Type_path.path,
                    Type => {
                        unimplemented!("For slice type : {:?}", Type.to_token_stream().to_string())
                    }
                };
                Convert_to_FFI_reference(Type_reference.mutability.is_some(), path)
            }
            syn::Type::Path(Type_path) => {
                Convert_to_FFI_reference(Type_reference.mutability.is_some(), &Type_path.path)
            }
            Type => unimplemented!(
                "For reference type : {:?}",
                Type.to_token_stream().to_string()
            ),
        },
        syn::Type::Path(Type_path) => Convert_to_FFI_primitive(Type_path),
        Type => unimplemented!("For type : {:?}", Type.to_token_stream().to_string()),
    }
}

fn Convert_to_FFI_reference(Mutable: bool, Path: &syn::Path) -> syn::Type {
    let Path = if Path.to_token_stream().to_string() == "str" {
        parse_quote! {u8}
    } else {
        Path.clone()
    };

    if Mutable {
        return parse_quote! {*mut #Path};
    }
    parse_quote! {*const #Path}
}

fn Convert_to_FFI_primitive(Current_type: &syn::TypePath) -> syn::Type {
    match Current_type.to_token_stream().to_string().as_str() {
        "i8" | "i16" | "isize" | "i32" => parse_quote! {u32},
        "bool" | "u8" | "u16" | "usize" | "u32" => parse_quote! {u32},
        "i64" => parse_quote! {u64},
        "f32" => parse_quote! {f32},
        "f64" => parse_quote! {f64},
        _ => unimplemented!(
            "for primitive type : {:?}",
            Current_type.to_token_stream().to_string()
        ),
    }
}
