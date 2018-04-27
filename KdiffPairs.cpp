#include "unordered_set"
using namespace std;
#include "KdiffPairs.h"
 int KdiffPairs::findPairs(vector<int>& nums, int k) {
    if (nums.size() <= 1 || k < 0) return 0;
    int ans = 0;
    unordered_set<int> set;
    unordered_set<int> set2;
    if (k == 0) {
        for (int i : nums) {
            if (set.find(i) != set.end()) {
                if (set2.find(i) == set2.end()) {
                    ++ans;
                    set2.insert(i);
                }
            }
            else set.insert(i);

        }
        return ans;
    }
    for (int i : nums) {
        set.insert(i);
    }

    for (int i : set) {
        if (set.find(i + k) != set.end()) {
            ++ans;
        }

    }
    return ans;

};