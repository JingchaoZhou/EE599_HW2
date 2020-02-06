#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution;
    std::vector<int> inputs = {5,7,2};
    std::vector<int> inputs1 = {7};
    std::vector<int> outputs = solution.uni(inputs,inputs1);
    for(int j = 0; j < outputs.size();j++){
        std::cout << outputs[j];
    } 
    return EXIT_SUCCESS;
}