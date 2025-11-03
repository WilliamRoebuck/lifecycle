SANITIZER_CXXOPTS = select({
    "//config:thread_sanitizer_enabled": ["-fsanitize=thread", "-O0", "-g"],
    "//config:ub_sanitizer_enabled": ["-fsanitize=undefined", "-O0", "-g"],
    "//config:address_sanitizer_enabled": [
        "-fsanitize=address",
        "-fno-omit-frame-pointer",
        "-O1",
        "-g",
    ],
    "//conditions:default": [],
})

SANITIZER_LINKOPTS = select({
    "//config:thread_sanitizer_enabled": ["-fsanitize=thread"],
    "//config:ub_sanitizer_enabled": ["-fsanitize-link-c++-runtime", "-fsanitize=undefined"],
    "//config:address_sanitizer_enabled": ["-fsanitize=address"],
    "//conditions:default": [],
})
