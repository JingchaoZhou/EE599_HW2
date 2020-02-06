#include <iostream>
#include "src/lib/solution.h"
#include <iterator>

int main()
{
    Solution solution ;
    string from = "add";
    string to = "egk";
    map<char,char> out = solution.mappable(from,to);
    map <char,char>::iterator itr;
    cout << "{";
    for(itr = out.begin(); itr != out.end(); ++itr){
        cout <<"(" << itr -> first << "->" << itr -> second <<")";
    }
    cout << "}" << endl;

    return EXIT_SUCCESS;
}