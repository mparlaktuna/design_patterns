load("@rules_cc//cc:cc_binary.bzl", "cc_binary")

cc_library(
    name = "dialog",
    hdrs = ["dialog.hpp"],
    srcs = ["dialog.cpp"],
)

cc_library(
    name = "button",
    hdrs = ["button.hpp"],
    srcs = ["button.cpp"],
)

cc_library(
    name = "didp",
    hdrs = ["didp.hpp"],
    deps = ["dialog",
            "button"],
    visibility = ["//:__subpackages__"]
)
