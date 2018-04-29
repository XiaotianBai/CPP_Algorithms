//
// Created by BXT on 2018/4/28.
//

#include "deletenodeinabst.h"

TreeNode *deletenodeinabst::deleteNode(TreeNode *root, int key) {
    if (!root) return root;
    if (root->val == key) {
        root = reformat(root);
        return root;
    }
    TreeNode *cur(root);
    TreeNode *parent(root);
    while (parent->left || parent->right) {
        if (parent->val < key) {
            if (parent->right && parent->right->val == key) {
                parent->right = reformat(parent->right);
            } else parent = parent->right;
        }
        if (parent->val > key) {
            if (parent->left && parent->left->val == key) {
                parent->left = reformat(parent->left);
            } else parent = parent->left;
        }
    }
    return root;

}

TreeNode *deletenodeinabst::reformat(TreeNode *root) {
    TreeNode *start = root;
    if (root->left && root->right) {
        root->val = root->left->val;
        TreeNode *temp = root->left->right;
        root->left = root->left->left;
        TreeNode *pos = root->right;
        while (pos->left) {
            pos = pos->left;
        }
        pos->left = temp;
        return start;
    } else if (root->left) {
        TreeNode *temp = root->left;
        root->val = root->left->val;
        root->left = temp->left;
        root->right = temp->right;
        return start;
    } else if (root->right) {
        TreeNode *temp = root->right;
        root->val = root->right->val;
        root->left = temp->left;
        root->right = temp->right;
        return start;
    } else {
        return nullptr;
    }
}