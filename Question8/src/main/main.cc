#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    vector<int> inputs = {1,2,3,4,5,6};
    inputs = solution.SortByMedian(inputs);
    for(int i =0; i< inputs.size();i++){
        cout << inputs[i] << "  ";

    }

    return EXIT_SUCCESS;
}