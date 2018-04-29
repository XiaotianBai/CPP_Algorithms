#include <iostream>
#include "vector"
#include "unordered_set"
#include "TreeNode.h"
#include "deletenodeinabst.h"
using namespace std;


int main() {
    auto root = new TreeNode(4);
//    root->left = new TreeNode(3);
//    root->right = new TreeNode(5);
//    root->left->left = new TreeNode(1);
    root = deletenodeinabst::deleteNode(root, 4);
    std::cout << root->val << std::endl;
    return 0;
}