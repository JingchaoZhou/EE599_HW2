#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(SortByMedium, OddSize) {
  Solution solution;
  vector<int> inputs = {1,2,3,4,5,6,7};
  vector<int> actual = solution.SortByMedian(inputs);
  vector<int> expected = {3,2,1,4,7,6,5};
  EXPECT_EQ(expected, actual);
}

TEST(SortByMedium, Evensize) {
  Solution solution;
  vector<int> inputs = {1,2,3,4,5,6};
  vector<int> actual = solution.SortByMedian(inputs);
  vector<int> expected = {3,2,1,6,5,4};
  EXPECT_EQ(expected, actual);
}

TEST(SortByMedium, NULL) {
  Solution solution;
  vector<int> inputs = {};
  vector<int> actual = solution.SortByMedian(inputs);
  vector<int> expected = {};
  EXPECT_EQ(expected, actual);
}
