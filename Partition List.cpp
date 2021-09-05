/*
Given the head of a linked list and a value x, partition it such that all nodes less than x come before nodes greater than or equal to x.

You should preserve the original relative order of the nodes in each of the two partitions.

 

Example 1:


Input: head = [1,4,3,2,5,2], x = 3
Output: [1,2,2,4,3,5]

Example 2:

Input: head = [2,1], x = 2
Output: [1,2]
*/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *partition(ListNode *head, int x) {
        ListNode smallhead{0};
        ListNode highhead{0};
        auto small = smallhead;
        auto high = highhead;

        while (head) {
            if (head->val < x) {
                small.next = head;
                small = small.next;
            } else {
                high.next = head;
                high = high->next;
            }
            head = headnext;
        }
        small->next = highhead->next;
        high->next = nullptr;

        return smallhead->next;
    }
};
