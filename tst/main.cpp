#include <iostream>

#include "gtest.h"

int main(int argc, char** argv) {
  std::cout << "\n\n## Compiled: " << __DATE__ << " at " << __TIME__ << " ##\n\n";
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}