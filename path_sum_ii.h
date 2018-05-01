//
// Created by BXT on 2018/4/29.
//

#ifndef LEETCODECPP_PATH_SUM_II_H
#define LEETCODECPP_PATH_SUM_II_H

#include "vector"
#include "TreeNode.h"

using namespace std;

class path_sum_ii {
    vector<vector<int>> res;

    void helper(TreeNode *root, int sum, vector<int> &vec);

public:
    vector<vector<int>> pathSum(TreeNode *root, int sum);
};


#endif //LEETCODECPP_PATH_SUM_II_H
