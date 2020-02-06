#include "solution.h"
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <iterator>


void Solution::dupRemove(std::vector<int> &inputs){ 
  std::vector<int>::iterator it,it1;
  for (it = inputs.begin();it != inputs.end();){
    it1 = find(inputs.begin(),it,*it);
    if(it1 != it){
      it = inputs.erase(it);      
    }
    else{
      it ++;
    }
  }
}

void Solution::dupRemoveS(std::vector<int> &inputs){
  std::set<int> s(inputs.begin(),inputs.end());
  inputs.assign(s.begin(),s.end());
}

void Solution::reversed(std::vector<int> &inputs){
  std::reverse(inputs.begin(),inputs.end());
}

void Solution::oddRemover(std::vector<int> &inputs){
  for (auto it = inputs.begin();it != inputs.end();){
    if (*it % 2 != 0){
      inputs.erase(it);
    }
    else{
      ++it;
    }
  }
}

std::vector<int> Solution::concatenating(std::vector<int> &inputs, std::vector<int> &inputs1){
  inputs.insert(inputs.end(),inputs1.begin(),inputs1.end());
  return inputs;
}

std::vector<int> Solution::uni(std::vector<int> &inputs, std::vector<int> &inputs1){
  
  std::vector<int> out;
  std::set<int> s1(inputs.begin(),inputs.end());
  std::set<int> s2(inputs1.begin(),inputs1.end());
  std::set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(),std::insert_iterator<std::vector<int>>(out,out.begin()));

return out;

}