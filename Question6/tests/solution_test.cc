#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(palindromeTest, ApproximatePalindrome) {
  Solution solution;
  string x = "No 'x' in Nixon";
  EXPECT_EQ(true, solution.palindrome(x));
}

TEST(palindromeTest, NULLPalindrome) {
  Solution solution;
  string x = "";
  EXPECT_EQ(true, solution.palindrome(x));
}

TEST(palindromeTest, NotPalindrome) {
  Solution solution;
  string x = "!@#$^ESDG";
  EXPECT_EQ(false, solution.palindrome(x));
}