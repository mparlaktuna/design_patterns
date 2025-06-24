#include <gtest/gtest.h>
#include "didp.hpp"
#include "spdlog/spdlog.h"

using namespace spdlog;

// I will reorganize the example code when updating with templates. at this level it is not even worth to fix his problems.
// /**
//  * The client code works with factories and products only through abstract
//  * types: AbstractFactory and AbstractProduct. This lets you pass any factory or
//  * product subclass to the client code without breaking it.
//  */

// void ClientCode(const AbstractFactory &factory) {
//   const AbstractProductA *product_a = factory.CreateProductA();
//   const AbstractProductB *product_b = factory.CreateProductB();
//   std::cout << product_b->UsefulFunctionB() << "\n";
//   std::cout << product_b->AnotherUsefulFunctionB(*product_a) << "\n";
//   delete product_a;
//   delete product_b;
// }

// int main() {
//   std::cout << "Client: Testing client code with the first factory type:\n";
//   ConcreteFactory1 *f1 = new ConcreteFactory1();
//   ClientCode(*f1);
//   delete f1;
//   std::cout << std::endl;
//   std::cout << "Client: Testing the same client code with the second factory type:\n";
//   ConcreteFactory2 *f2 = new ConcreteFactory2();
//   ClientCode(*f2);
//   delete f2;
//   return 0;
// }



TEST(AbstractFactory, Didp) {
  // auto client_code = [](const Creator& creator) {
  //   return creator.SomeOperation();
  // };

  // Creator* creator = new ConcreteCreator1();
  // Creator* creator2 = new ConcreteCreator2();
  // client_code(*creator2);
  // info("test");
}
