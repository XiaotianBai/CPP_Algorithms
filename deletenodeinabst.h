//
// Created by BXT on 2018/4/28.
//

#ifndef LEETCODECPP_DELETENODEINABST_H
#define LEETCODECPP_DELETENODEINABST_H

#include "TreeNode.h"

class deletenodeinabst {
    static TreeNode *reformat(TreeNode *roott);

public:
    static TreeNode *deleteNode(TreeNode *root, int key);
};


#endif //LEETCODECPP_DELETENODEINABST_H
