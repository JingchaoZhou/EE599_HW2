#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(mappaleTest, sameKeySameValue) {
  Solution solution;
  string from = "add";
  string to = "egg";
  map<char,char> out = solution.mappable(from,to);
  map<char,char> expected;
  expected.insert(pair <char, char> ('a', 'e'));
  expected.insert(pair <char, char> ('d', 'g'));
  EXPECT_EQ(expected, out);
}

TEST(mappaleTest, sameKeyDiffValue) {
  Solution solution;
  string from = "add";
  string to = "age";
  map<char,char> out = solution.mappable(from,to);
  map<char,char> expected;
  expected.clear();
  EXPECT_EQ(expected, out);
}

TEST(mappaleTest, sameKeyDiffValue2) {
  Solution solution;
  string from = "harder";
  string to = "waiter";
  map<char,char> out = solution.mappable(from,to);
  map<char,char> expected;
  expected.clear();
  EXPECT_EQ(expected, out);
}

TEST(mappaleTest, sameKeySameValue2) {
  Solution solution;
  string from = "aabbrr";
  string to = "ddeekk";
  map<char,char> out = solution.mappable(from,to);
  map<char,char> expected;
  expected.insert(pair <char, char> ('a', 'd'));
  expected.insert(pair <char, char> ('b', 'e'));
  expected.insert(pair <char, char> ('r', 'k'));
  EXPECT_EQ(expected, out);
}