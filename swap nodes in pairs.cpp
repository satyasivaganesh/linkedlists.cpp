class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode *temp1,*temp2,*temp3;
        if(head==NULL or head->next==NULL) return head;
        temp1=head;
        temp2=head->next;
        head=temp2;
        temp1->next=head->next;
        head->next=temp1;
        if(temp1->next==NULL) return head;
        temp3=temp1;
        temp1=temp1->next;
        if(temp1->next==NULL) return head;
        temp2=temp1->next;
        while(1)
        {
            temp3->next=temp2;
            temp1->next=temp2->next;
            temp2->next=temp1;
            temp3=temp1;
            if(temp1->next==NULL) break;
            temp1=temp1->next;
            temp2=temp1->next;
            if(temp2==NULL) break;
        }
        return head;
    }
};
