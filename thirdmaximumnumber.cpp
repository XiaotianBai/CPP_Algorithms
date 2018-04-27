//
// Created by BXT on 2018/4/26.
//
#include "iostream"
#include "cstdlib"
#include "thirdmaximumnumber.h"
using namespace std;
int thirdmaximumnumber::thirdMax(vector<int>& nums) {
    if (nums.size() == 1) return nums[0];
    if (nums.size() == 2) return fmax(nums[0], nums[1]);
    int min = nums[0];
    for (int i : nums) {
        if (i < min) min = i;
    }
    int first = min, second = min, third = min;
    for (int i : nums) {
        if (i > first) {
            third = second;
            second = first;
            first = i;
        }
        else if (i > second && i != first ) {
            third = second;
            second = i;
        }
        else if (i > third && i != first && i != second) {
            third = i;
        }
    }
    if (second != third) return third;
    else return first;
}