class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL or head->next==NULL)
            return head;
        ListNode *temp1,*temp2,*node,*temp3;
        temp1=head;
        int l=0;
        while(temp1)
        {
            l++;
            temp1=temp1->next;
        }
        if(l==3)
        {
            temp1=head;
            temp2=head->next;
            node=head->next->next;
            temp2->next=NULL;
            temp1->next=node;
            temp1->next->next=temp2;
            return head;
        }
        if(l%2==0)
        {
            temp1=head;
            temp2=head->next;
            node=head->next->next;
            while(temp2->next)
            {
                temp2->next=temp2->next->next;
                temp3=temp1->next;
                temp1->next=node;
                temp1->next->next=temp3;
                temp1=temp1->next;
                temp2=temp2->next;
                node=temp2->next;
            }
            return head;
        }
        else
        {
            temp1=head;
            temp2=head->next;
            node=head->next->next;
            while(temp2->next->next)
            {
                temp2->next=temp2->next->next;
                temp3=temp1->next;
                temp1->next=node;
                temp1->next=node;
                temp1->next->next=temp3;
                temp1=temp1->next;
                temp2=temp2->next;
                node=temp2->next;
            }
            temp2->next=NULL;
            temp1->next=node;
            temp1->next->next=temp3;
            return head;
        }
        
    }
};
