class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *temp,*nn;
        int l=0;
        temp=head;
        while(temp)
        {
            l++;
            temp=temp->next;
            
        }
        if(k==0|k==l|l==1)
        {
            return head;
        }
        if(head==NULL)
        {
            return head;
        }
        else
        {
            for(int i=0;i<k%l;i++)
            {
                temp=head;
                while(temp->next->next)
                {
                    temp=temp->next;
                }
                nn=new ListNode;
                nn->val=temp->next->val;
                cout<<nn->val;
                nn->next=head;
                head=nn;
                temp->next=NULL;
            }
        }
        return head;
    }
};
