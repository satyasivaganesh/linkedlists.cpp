class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *temp1,*temp2,*temp3;
        if(head==NULL)return NULL;
        temp1=head;
        if(temp1->next==NULL)return head;
        temp2=temp1->next;
        if(temp2->next==NULL)
        {
            if(temp1->val==temp2->val)return NULL;
            else
                return head;
        }
        
        
        temp3=temp2->next;
        if(temp3->next==NULL and temp1->val==temp2->val and temp2->val==temp3->val)return NULL;
        int ref1=0;
        if(temp1->val==temp2->val)ref1=1;
        //if(ref1)head=head->next;
        while(temp3)
        {
            if(temp2->val!=temp3->val)
            {   
                temp1=temp1->next;
                temp2=temp2->next;
                temp3=temp3->next;
            }
            else
            {
            
            int ref=0;
            while(temp3 and temp3->val==temp2->val)
            {
                ref=1;
                temp3=temp3->next;
            }
            if(ref==1)
            {
                temp1->next=temp3;
                temp2=temp3;
                if(temp3)
                    temp3=temp3->next;
                else
                    break;
            }
                
            }
        }
        if(head!=NULL)
            if(head->next!=NULL)
                if(head->val==head->next->val)return head->next->next;
                
        if(ref1)
            head=head->next;
        return head;
        
    }
};
