#include "gtest/gtest.h"
#include "Date.hpp"
#include "Date_test.hpp"
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}