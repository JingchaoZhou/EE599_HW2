#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  int Add(int num1, int num2);
  string Add(int num1, string str1);
  string Add(string str1, int num1);
  string Add(string str1, string str2);

private:
  int num1,num2;
  string str1,str2;
};

#endif