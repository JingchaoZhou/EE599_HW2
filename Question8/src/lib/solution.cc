#include "solution.h"
#include <iostream>

vector<int> Solution::SortByMedian(std::vector<int> &inputs) { 
  sort(inputs.begin(), inputs.end());
  int size = inputs.size();
  int nexthalf = (size/2) + 1;

  if (inputs.size() == 0) {
    return inputs;
  }

if (size%2 != 0){
  reverse(inputs.begin(),inputs.begin() + (size/2));
  reverse(inputs.begin() + nexthalf, inputs.end());
}

else{
  reverse(inputs.begin(),inputs.begin() + (size/2));
  reverse(inputs.begin() + size/2, inputs.end());
}
return inputs;
}

