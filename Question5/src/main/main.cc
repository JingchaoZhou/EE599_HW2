#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::cout << solution.swapString("0123456",4,6) << std::endl;
    string x = "EE599";
    solution.reverseString(x);
    solution.converToLower(x);
    for(int i = 0; i < x.size(); i++){
        cout<< x[i];
    }
    return EXIT_SUCCESS;
}