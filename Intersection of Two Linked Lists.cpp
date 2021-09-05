/*Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null.

For example, the following two linked lists begin to intersect at node c1:


The test cases are generated such that there are no cycles anywhere in the entire linked structure.

Note that the linked lists must retain their original structure after the function returns.
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *c1=headA;
        ListNode *c2=headB;
        
        if (!c1 || !c2) {
         return NULL;}
        
        while(c1!=c2)
        {
            c1=c1->next;
            c2=c2->next;
        
        if(c1==c2)
            break;
    
        if(!c1) c1=headB;
        
        if(!c2)   c2=headA;
        }
        return c1;
    }

};
