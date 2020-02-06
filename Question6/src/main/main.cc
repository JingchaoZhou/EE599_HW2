#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    string x = "Was it a car or a cat I sa";
    std::cout << solution.palindrome(x) << std::endl;

    return EXIT_SUCCESS;
}