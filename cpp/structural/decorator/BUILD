
load("@rules_cc//cc:cc_binary.bzl", "cc_binary")

cc_library(
    name = "didp",
    hdrs = ["didp.hpp"],
    deps = ["@spdlog//:spdlog"],
    copts = ["-std=gnu++23"],
)

cc_test(
    name = "test",
    srcs = ["test.cpp"],
    deps = ["@googletest//:gtest_main",
            "didp"],
    copts = ["-std=gnu++23"],
)
