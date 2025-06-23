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
            "//cpp/creational/factory:didp"],
    copts = ["-std=gnu++23"],
)
