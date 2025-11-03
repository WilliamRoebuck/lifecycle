cc_binary(
    name = "cpp_lifecycle_app",
    deps = [
        "//launch_manager:lifecycle_client"
    ],
    srcs = [
        "main.cpp",
    ],
    visibility = ["//visibility:public"],
    copts = select({"//config:x86_64-qnx": [], "//conditions:default": ["-pthread"]}),
    linkopts = select({"//config:x86_64-qnx": [], "//conditions:default": ["-lpthread"]}),
)
