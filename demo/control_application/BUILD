cc_binary(
    name = "lmcontrol",
    deps = [
        "//external/ipc_dropin:ipc_dropin"
    ],
    srcs = [
        "control_app_cli.cpp",
        "control.hpp"
    ],
    visibility = ["//visibility:public"],
    copts = select({"//config:x86_64-qnx": [], "//conditions:default": ["-pthread"]}),
    linkopts = select({"//config:x86_64-qnx": [], "//conditions:default": ["-lpthread", "-lrt"]}),
)

cc_binary(
    name = "control_daemon",
    deps = [
        "//launch_manager:control_client",
        "//launch_manager:lifecycle_client",
        "//external/ipc_dropin:ipc_dropin"
    ],
    srcs = [
        "control_daemon.cpp",
        "control.hpp"
    ],
    visibility = ["//visibility:public"],
    copts = select({"//config:x86_64-qnx": [], "//conditions:default": ["-pthread"]}),
    linkopts = select({"//config:x86_64-qnx": [], "//conditions:default": ["-lpthread", "-lrt"]}),
)

