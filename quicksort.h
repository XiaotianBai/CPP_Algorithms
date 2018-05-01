//
// Created by BXT on 2018/4/30.
//

#ifndef LEETCODECPP_QUICKSORT_H
#define LEETCODECPP_QUICKSORT_H

#include "vector"
#include "array"

using namespace std;

class quicksort {
public:
    static void qsort(vector<int> &v, int p, int r) {
        if (p < r) {
            int q = lomutospartition(v, p, r);
            qsort(v, p, q - 1);
            qsort(v, q + 1, r);
        }
    }

    static void qsort2(vector<int> &v, int p, int r) {
        if (p < r) {
            int q = hoarspartition(v, p, r);
            qsort2(v, p, q);
            qsort2(v, q + 1, r);
        }
    }

    static int lomutospartition(vector<int> &v, int pbeg, int pend) {
        int x = v[pend];
        int i = pbeg;
        for (int j = pbeg; j < pend; j++) {
            if (v[j] <= x) {
                int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
                ++i;
            }
        }
        int temp = v[i];
        v[i] = x;
        v[pend] = temp;
        return i;
    }

    static int hoarspartition(vector<int> &v, int pbeg, int pend) {
        int x = v[pbeg];
        int i = pbeg;
        int j = pend;
        while (true) {
            while (j >= pbeg && v[j] > x) --j;
            while (i <= pend && v[i] < x) ++i;
            if (i < j) {
                int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
                --j;
                ++i;
            } else return j;
        }
    }


};


#endif //LEETCODECPP_QUICKSORT_H
