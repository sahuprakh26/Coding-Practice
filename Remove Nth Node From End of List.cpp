/* Remove Nth Node From End of List



Given the head of a linked list, remove the nth node from the end of the list and return its head.

 

Example 1:


Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]
*/
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* p1 = head;  
        ListNode* p2 = head;
        
        for(int i=0; i<n; i++)
            p1 = p1->next;
        
        if(p1 == NULL)
            return head->next; 
        
        while(p1->next != NULL) {
            p1 = p1->next;
            p2 = p2->next;
        }
        
        p2->next = p2->next->next;
        
        return head;
    }
};
