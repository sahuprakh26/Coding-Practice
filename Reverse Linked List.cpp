/* 
Given the head of a singly linked list, reverse the list, and return the reversed list.

 

Example 1:


Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]
*/
//Recursive Approach

   struct ListNode* doRev(struct ListNode* prev, struct ListNode* curr)
{
	if(curr == NULL) return prev;

	struct ListNode* nextNode = curr->next;
	curr->next = prev;

	return doRev(curr, nextNode);        
}

struct ListNode* reverseList(struct ListNode* head)
{
	return doRev(NULL, head);   
}

//Iterative Approach
struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *prev,*curr,*next;
    prev=next=NULL;
    curr=head;
    
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    return head;
    

}
