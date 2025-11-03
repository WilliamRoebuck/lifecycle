package(default_visibility = ["//visibility:public"])

load("@rules_rust//rust:defs.bzl", "rust_library")

rust_library(
    name = "monitor_rs",
    srcs = [
        "src/monitor.rs",
        "src/errors.rs",
        "src/lib.rs",
    ],
    deps = [
        "//health_monitor:hm_shared_lib",
        "@crates//:libc"
    ]
)
