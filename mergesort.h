
#ifndef LEETCODECPP_MERGESORT_H
#define LEETCODECPP_MERGESORT_H

#include "vector"

using namespace std;

class mergesort {
public:
    static void msort(vector<int> &v, int p, int r) {
        if (p < r) {
            int mid = (p + r) / 2;
            msort(v, p, mid);
            msort(v, mid + 1, r);
            merge(v, p, mid, r);
        }
    }

    static void merge(vector<int> &v, int p, int q, int r) {
        vector<int> v1(v.begin(), v.begin() + q - p + 1);
        vector<int> v2(v.begin() + q - p + 1, v.end());


    }
};

#endif //LEETCODECPP_MERGESORT_H
