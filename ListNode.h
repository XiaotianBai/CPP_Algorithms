//
// Created by XiaotianBai on 4/28/2018.
//

#ifndef LEETCODECPP_LISTNODE_H
#define LEETCODECPP_LISTNODE_H


struct ListNode {
    int val;
    ListNode *next;

    explicit ListNode(int x) : val(x), next(nullptr) {};
};

#endif //LEETCODECPP_LISTNODE_H
