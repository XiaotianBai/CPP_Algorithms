//
// Created by BXT on 2018/4/29.
//

#ifndef LEETCODECPP_CONSTRUCT_BTREE_FROM_PREORDER_AND_INORDER_H
#define LEETCODECPP_CONSTRUCT_BTREE_FROM_PREORDER_AND_INORDER_H

#include "TreeNode.h"
#include "vector"

using namespace std;

class construct_btree_from_preorder_and_inorder {
public:
    static TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder);
};


#endif //LEETCODECPP_CONSTRUCT_BTREE_FROM_PREORDER_AND_INORDER_H
