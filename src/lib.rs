#![allow(non_snake_case)]
#![allow(non_upper_case_globals)]
#![allow(non_camel_case_types)]

#[cfg(feature = "WASM")]
mod WASM;

#[cfg(feature = "Native")]
mod Native;

mod Shared;

#[cfg(feature = "WASM")]
#[proc_macro_attribute]
pub fn Bind_function_WASM(
    _Attributes: proc_macro::TokenStream,
    Item: proc_macro::TokenStream,
) -> proc_macro::TokenStream {
    WASM::Bind_function_WASM(_Attributes, Item)
}

#[cfg(feature = "Native")]
#[proc_macro_attribute]
pub fn Bind_function_native(
    _Attributes: proc_macro::TokenStream,
    Item: proc_macro::TokenStream,
) -> proc_macro::TokenStream {
    Native::Bind_function_native(_Attributes, Item)
}
