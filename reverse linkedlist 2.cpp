class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if( left==right)return head;
        ListNode *prev=NULL,*cur=head,*nxt,*temp1;
        temp1=head;
        for(int i=0;i<left-2;i++)
        {

           temp1=temp1->next;
        }
        ListNode *temp2;
        if(left==1)
        {
            cur=head;
            temp2=head;
        }
        else
        {
        temp2=temp1->next;
        cur=temp1->next;
        }
        for(int i=0;i<right-left+1;i++)
        {
            nxt=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nxt;
        }
        if(left==1)
        {
            head=prev;
            temp2->next=nxt;
        }
        else
        {
        temp1->next=prev;
        temp2->next=nxt;
        }
        
        return head;
    }
};
