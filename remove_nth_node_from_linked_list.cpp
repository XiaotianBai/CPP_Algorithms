//
// Created by XiaotianBai on 4/28/2018.
//

#include "remove_nth_node_from_linked_list.h"

ListNode *remove_nth_node_from_linked_list::removeNthFromEnd(ListNode *head, int n) {
    if (n == 0) return head;
    ListNode *front = new ListNode(0);
    ListNode *back = new ListNode(0);
    front->next = head;
    back->next = head;
    while (n--) {
        if (!front->next)
            return head;
        front = front->next;
    }
    while (front->next) {
        front = front->next;
        back = back->next;
    }
    if (back->next == head) {
        head = head->next;
        return head;
    }
    ListNode *nth = back->next;
    back->next = nth->next;
    nth->next = nullptr;
    return head;
}
