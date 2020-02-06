#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>
#include <string>

TEST(ModifyString, swapByIndex) {
  Solution solution;
  string x = "0123456";
  x =solution.swapString(x,4,6);
  std::string expected = "0123654";
  EXPECT_EQ(expected, x);
}

TEST(ModifyString, reverseStr) {
  Solution solution;
  string x = "ABCDE";
  solution.reverseString(x);
  std::string expected = "EDCBA";
  EXPECT_EQ(expected, x);
}

TEST(ModifyString, ToLowercase) {
  Solution solution;
  string x = "ABCDE";
  solution.converToLower(x);
  std::string expected = "abcde";
  EXPECT_EQ(expected, x);
}
