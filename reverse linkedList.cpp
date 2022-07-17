class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev=NULL,*Next,*cur=head;
        while(cur)
        {
            Next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=Next;
            
            
            
        }
    
        return prev;
    }
};
