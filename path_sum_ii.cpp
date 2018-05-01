//
// Created by BXT on 2018/4/29.
//

#include "path_sum_ii.h"

vector<vector<int>> path_sum_ii::pathSum(TreeNode *root, int sum) {
    path_sum_ii p;
    if (!root) return p.res;
    vector<int> v;
    p.helper(root, sum, v);
    return p.res;
}

void path_sum_ii::helper(TreeNode *root, int sum, vector<int> &vec) {
    vector<int> v;
    if (root->left) {
        v = vec;
        v.push_back(root->val);
        helper(root->left, sum - root->val, v);
    }
    if (root->right) {
        v = vec;
        v.push_back(root->val);
        helper(root->right, sum - root->val, v);
    }
    if (!(root->left || root->right) && root->val == sum) {
        v = vec;
        v.push_back(root->val);
        res.push_back(v);
    }

}

