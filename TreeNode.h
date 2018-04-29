//
// Created by BXT on 2018/4/28.
//

#ifndef LEETCODECPP_TREENODE_H
#define LEETCODECPP_TREENODE_H


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    explicit TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

#endif //LEETCODECPP_TREENODE_H