#include "solution.h"

bool Solution::palindrome(string &x) { 
  int j;
  x.erase(std::remove_if( x.begin(), x.end(), [](char& c){ 
    return (!isalnum(c) || isspace(c));}), x.end() );

  transform(x.begin(),x.end(),x.begin(), ::tolower);

  string y = x;
  
  reverse(x.begin(),x.end());

  if(x != y){
    return false;
  }

return true;
}

