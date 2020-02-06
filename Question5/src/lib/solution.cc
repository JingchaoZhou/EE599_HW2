#include "solution.h"
#include <iostream>
#include <algorithm>

string Solution::swapString(string x, int i, int j) { 
  char temp = x[i];
  x[i] = x[j];
  x[j] = temp;
  return x; 
}

void Solution::reverseString(string &x){
  reverse(x.begin(),x.end());
}

void Solution::converToLower(string &x){
  transform(x.begin(),x.end(),x.begin(), ::tolower);
}

