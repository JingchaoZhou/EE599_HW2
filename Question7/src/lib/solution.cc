#include "solution.h"

map<char,char> Solution::mappable(string from, string to) { 
  map <char,char> out;
  map <char,char>::iterator itr;

  if (from.size() != to.size()){
    out.clear();
    return out;
  }

  else{
    out.insert(pair <char, char> (from[0], to[0]));
    for(int i = 1; i < from.size(); i++){
      itr = out.find(from[i]);
        if(itr == out.end()){
          out.insert(pair <char, char> (from[i], to[i]));
          }
        else {
          if(out[from[i]] != to[i]){
            out.clear();
            return out;
          }

          else{
            continue;
          }
        }
    }
    return out;
  }

}

