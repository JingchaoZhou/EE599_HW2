#include <iostream>
#include "src/lib/solution.h"

int main()
{   int myints[5] = {1, 2, 3, 4, 5};
    char mychars[3] = {'1','2','3'};
    float myfloats[4] = {1.1,2.2,3.3,4.4};
    Solution solution ;
    std::cout << "size of int array: " << sizeof(myints)/sizeof(myints[0]) << std::endl;
    std::cout << "size of char array: " << sizeof(mychars)/sizeof(mychars[0]) << std::endl;
    std::cout << "size of float array: " << sizeof(myfloats)/sizeof(myfloats[0]) << std::endl;

    return EXIT_SUCCESS;
}