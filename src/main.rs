#![allow(non_camel_case_types)]
#![allow(non_snake_case)]
#![allow(non_upper_case_globals)]
#![allow(clippy::upper_case_acronyms)]

mod Arguments;
mod Format;
mod Functions;
mod Native;
mod Type_tree;
mod WASM;

use clap::Parser;
use syn::visit::Visit;
use Arguments::Arguments_type;

fn main() -> Result<(), ()> {
    let Arguments = Arguments_type::parse();

    let Input = lvgl_rust_sys::_bindgen_raw_src();
    let Parsed_input = syn::parse_file(Input).expect("Error parsing input file");

    let mut LVGL_functions = Functions::LVGL_functions_type::default();
    LVGL_functions.visit_file(&Parsed_input);

    let Result = match Arguments.Mode {
        Arguments::Mode_type::Native => Native::Generate(&Arguments.Output, &LVGL_functions),
        Arguments::Mode_type::WASM => WASM::Generate(&Arguments.Output, &LVGL_functions),
    };

    if let Err(Error) = Result {
        eprintln!("Error: {}", Error);
        Err(())
    } else {
        println!("Bindings generated successfully");
        Ok(())
    }
}
