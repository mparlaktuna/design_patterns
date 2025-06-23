#include <gtest/gtest.h>
#include "didp.hpp"
#include "spdlog/spdlog.h"

using namespace spdlog;

TEST(Factory, Didp) {

  auto client_code = [](const Creator& creator) {
    return creator.SomeOperation();
  };

  Creator* creator = new ConcreteCreator1();
  Creator* creator2 = new ConcreteCreator2();
  client_code(*creator2);
  info("test");
}
