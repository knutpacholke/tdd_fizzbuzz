#include <gtest/gtest.h>
#include <string>
#include "fizzbuzz.h"

TEST(TestTddFizzBuzz, CanCallFizzBuzz) {
  GTEST_ASSERT_EQ("1", fizzBuzz(1));
}
TEST(TestTddFizzBuzz, GetFizzIfThree) {
  GTEST_ASSERT_EQ("Fizz", fizzBuzz(3));
}
TEST(TestTddFizzBuzz, GetFizzBuzzIfMultipleOfThreeAndFive) {
  GTEST_ASSERT_EQ("FizzBuzz", fizzBuzz(15));
}
