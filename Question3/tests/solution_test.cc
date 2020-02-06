#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(RemoveDuplicates, NoSet) {
  Solution solution;
  std::vector<int> inputs = {1, 3,2,3,5,2};
  std::vector<int> expects = {1,3,2,5};
  solution.dupRemove(inputs);
  EXPECT_EQ(expects, inputs);
}

TEST(RemoveDuplicates, Set) {
  Solution solution;
  std::vector<int> inputs = {1, 2, 2,3,3,5};
  std::vector<int> expects = {1,2,3,5};
  solution.dupRemoveS(inputs);
  EXPECT_EQ(expects, inputs);
}

TEST(RemoveDuplicates, Reserve) {
  Solution solution;
  std::vector<int> inputs = {1, 2,3,4};
  std::vector<int> expects = {4,3,2,1};
  solution.reversed(inputs);
  EXPECT_EQ(expects, inputs);
}

TEST(RemoveDuplicates, OddRemove) {
  Solution solution;
  std::vector<int> inputs = {5,7,2,1};
  std::vector<int> expects = {2};
  solution.oddRemover(inputs);
  EXPECT_EQ(expects, inputs);
}

TEST(RemoveDuplicates, Concatenating) {
  Solution solution;
  std::vector<int> inputs = {5,7,2,1};
  std::vector<int> inputs1 = {9,8,7};
  std::vector<int> expects = {5,7,2,1,9,8,7};
  std::vector<int> ouputs = solution.concatenating(inputs,inputs1);
  EXPECT_EQ(expects, ouputs);
}

TEST(RemoveDuplicates, UnionFinder) {
  Solution solution;
  std::vector<int> inputs = {5,7,2,1};
  std::vector<int> inputs1 = {9,8,7};
  std::vector<int> expects = {7};
  std::vector<int> ouputs = solution.uni(inputs,inputs1);
  EXPECT_EQ(expects, ouputs);
}