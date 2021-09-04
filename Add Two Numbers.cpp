/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    if(l1==NULL)
        return l2;
    if(l2==NULL)
        return l1;
    int a,b;
    struct ListNode*res=(struct ListNode*)malloc(sizeof(struct ListNode)),*temp=res;
    res->val=0;
    while(l1!=NULL||l2!=NULL){
        
        if(l1==NULL)
            a=0;
        else{
            a=l1->val;
            l1=l1->next;
            }
        
        if(l2==NULL)
            b=0;
        else{
            b=l2->val;
            l2=l2->next;
            }
        
        
        res->val+=a+b;
        if(l1!=NULL||l2!=NULL||res->val>=10){
            res->next=malloc(sizeof(struct ListNode));
            res->next->val=0;
            res->next->val+=(res->val)/10;
            res->val=res->val%10;
            res=res->next;
        }
    }
    res->next=NULL;
    return temp;

}
