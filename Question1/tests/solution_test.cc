#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(AddShould, ReturnAddNums) {
  Solution solution;
  EXPECT_EQ(solution.Add(1,1), 2);
}

TEST(AddShould, ReturnAddStringNum) {
  Solution solution;
  std::string actual = solution.Add("EE",599);
  std::string expected = "EE599";
  EXPECT_EQ(expected, actual);
}

TEST(AddShould, ReturnAddNumString) {
  Solution solution;
  std::string actual = solution.Add(599,"EE");
  std::string expected = "599EE";
  EXPECT_EQ(expected, actual);
}

TEST(AddShould, ReturnAddStrings) {
  Solution solution;
  std::string actual = solution.Add("Happy","Birthday");
  std::string expected = "HappyBirthday";
  EXPECT_EQ(expected, actual);
}