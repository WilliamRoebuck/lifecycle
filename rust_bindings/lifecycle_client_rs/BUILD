package(default_visibility = ["//visibility:public"])

load("@rules_rust//rust:defs.bzl", "rust_library")

rust_library(
    name = "lifecycle_client_rs",
    srcs = [
        "src/lifecycle.rs",
        "src/lib.rs",
    ],
    deps = [
        "//launch_manager:lifecycle_client",
        "@crates//:libc"
    ]
)
