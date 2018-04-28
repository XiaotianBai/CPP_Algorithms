#include <iostream>
#include <iostream>
#include "cstdlib"
#include "vector"
#include "unordered_set"
#include "KdiffPairs.h"
#include "thirdmaximumnumber.h"
#include "remove_nth_node_from_linked_list.h"
#include "ListNode.h"
using namespace std;


int main() {
    auto head = new ListNode(1);
    head->next = new ListNode(2);
    head->next = new ListNode(3);
    remove_nth_node_from_linked_list::removeNthFromEnd(head, 2);

    std::cout << head->next->val << std::endl;
    return 0;
}