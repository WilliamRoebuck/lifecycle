// (c) 2025 ETAS GmbH. All rights reserved.

use std::fmt;

#[derive(Debug, Clone)]
pub struct ConstructorError;

impl fmt::Display for ConstructorError {
    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {
        write!(f, "failed to construct Monitor instance")
    }
}

impl std::error::Error for ConstructorError {}