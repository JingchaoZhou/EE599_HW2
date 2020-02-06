#include "solution.h"

using namespace std;

int Solution::Add(int num1, int num2) { 
    return num1 + num2; 
}

string Solution::Add(int num1, string str1){
    return to_string(num1) + str1; 
}

string Solution::Add(string str1, int num1){
  return str1 + to_string(num1);
}


string Solution::Add(string str1, string str2){
    return str1 + str2;
}