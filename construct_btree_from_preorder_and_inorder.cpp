//
// Created by BXT on 2018/4/29.
//

#include "construct_btree_from_preorder_and_inorder.h"

TreeNode *construct_btree_from_preorder_and_inorder::buildTree(vector<int> &preorder, vector<int> &inorder) {
    if (preorder.empty()) return nullptr;
    int size = preorder.size();
    if (size == 1) return new TreeNode(preorder[0]);
    auto root = new TreeNode(preorder[0]);
    int i = -1;
    int j = 0;
    for (; i < size - 1; i++) {
        if (inorder[i + 1] == root->val) break;
    }
    vector<int> lpreorder = vector<int>(preorder.begin() + 1, preorder.begin() + i + 2);
    vector<int> linorder = vector<int>(inorder.begin(), inorder.begin() + i + 1);
    root->left = buildTree(lpreorder, linorder);
    vector<int> rpreorder = vector<int>(preorder.begin() + i + 2, preorder.end());
    vector<int> rinorder = vector<int>(inorder.begin() + i + 2, inorder.end());
    root->right = buildTree(rpreorder, rinorder);


    return root;
}