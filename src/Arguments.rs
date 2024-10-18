use std::path::PathBuf;

use clap::{Parser, ValueEnum};

/// A binding tool generator for Xila.
#[derive(Parser, Debug)]
#[command(version, about, long_about = None)]
pub struct Arguments_type {
    /// Mode of the bindings.
    #[arg(value_enum)]
    pub Mode: Mode_type,
    
    /// Output path of the bindings.
    #[arg()]
    pub Output: PathBuf,
}

#[derive(ValueEnum, Debug, Clone)]
pub enum Mode_type {
    /// Generate native bindings for native (Xila).
    Native,

    /// Generate WebAssembly bindings.
    WASM,
}
