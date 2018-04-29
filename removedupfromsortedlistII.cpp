//
// Created by BXT on 2018/4/28.
//

#include "removedupfromsortedlistII.h"

ListNode *removedupfromsortedlistII::deleteDuplicates(ListNode *head) {
    int prev = head->val;
    int next = 0;
    if (head->val == head->next->val) {
        bool found = false;
        while (head->next) {
            head = head->next;
            if (head->next) next = head->next->val;
            else next = -head->val;
            if (head->val != prev && head->val != next) {
                found = true;
                prev = head->val;
                break;
            }
            prev = head->val;
        }
        if (!found) return nullptr;
    }
    if (!head->next)
        return head;
    ListNode *move(head);
    ListNode *cur(head);
    while (cur->next) {
        cur = cur->next;
        if (cur->next) next = cur->next->val;
        else next = -cur->val;
        if (cur->val != prev && cur->val != next) {
            move->next = cur;
            move = move->next;
        }
        prev = cur->val;
    }
    return head;
}
