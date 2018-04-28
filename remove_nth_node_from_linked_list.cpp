//
// Created by XiaotianBai on 4/28/2018.
//

#include "remove_nth_node_from_linked_list.h"

ListNode *removeNthFromEnd(ListNode *head, int n) {
    if (n == 0) return head;
    ListNode *front(head);
    ListNode *back(head);
    while (n--) {
        if (!front->next)
            return head;
        front = front->next;
    }
    while (front->next) {
        front = front->next;
        back = back->next;
    }
    ListNode *nth = back->next;
    back->next = back->next->next;
    nth->next = nullptr;
    return head;
};