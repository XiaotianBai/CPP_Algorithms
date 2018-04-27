#include <iostream>
#include <iostream>
#include "cstdlib"
#include "vector"
#include "unordered_set"
#include "KdiffPairs.h"
#include "thirdmaximumnumber.h"
using namespace std;


int main() {
    vector<int> nums = {2,2,3,1};
    int k = 2;
    std::cout << thirdmaximumnumber::thirdMax(nums) << std::endl;
    return 0;
}