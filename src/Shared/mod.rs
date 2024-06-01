use quote::format_ident;
use syn::Ident;

pub mod Argument;
pub mod Cast;
pub mod Function;
pub mod Type;

fn Get_size_argument_identifier(Argument: &Ident) -> Ident {
    format_ident!("__{}_size", Argument)
}
