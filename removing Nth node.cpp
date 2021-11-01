class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp;
        int l=0;
        temp=head;
        while(temp)
        {
            l++;
            temp=temp->next;
        }
        int len=l;
        temp=head;
        int x=1;
        if(l==1){
            head=NULL;
        }
        l=l-n-1;
        if(l==-1&&len!=1)
        {
            head=head->next;
        }
        else{
            while(x<=l)
            {
                x++;
                temp=temp->next;
            }
            if(temp->next==NULL)
            {
                temp->next=NULL;
            }
            else
            {
                temp->next=temp->next->next;
            }
        }
        return head;
    }
};
