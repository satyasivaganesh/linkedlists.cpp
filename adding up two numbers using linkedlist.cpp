/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *temp1,*temp2,*nn;
        int c1=0,c2=0,s=0,c=0;
        temp1=l1;
        temp2=l2;
        while(temp1!=NULL)
        {
            c1++;
            temp1=temp1->next;
        }
        while(temp2!=NULL)
        {
            c2++;
            temp2=temp2->next;
        }
        if(c1>=c2)
        {
            temp1=l1;
            temp2=l2;
            while(temp2!=NULL)
            {
                s=temp1->val+temp2->val+c;
                c=s/10;
                s=s%10;
                temp1->val=s;
                if(c && temp1->next==NULL)
                {
                        nn=new ListNode;
                        nn->val=c;
                        temp1->next=nn;
                        temp1->next->val=c;
                        c=0;
                }

                temp1=temp1->next;
                temp2=temp2->next;
            }
            while(temp1!=NULL){
                s=temp1->val+c;
                c=s/10;
                s=s%10;
                temp1->val=s;
                if(c &&temp1->next==NULL ){
                    nn=new ListNode;
                    nn->val=c;
                    temp1->next=nn;
                    temp1->next->val=c;
                    c=0;
                }
                  
             temp1=temp1->next;   
            }
          
            return l1;
           
        }
            
        else
        {
            temp2=l2;
            temp1=l1;
            while(temp1!=NULL)
            {
                s=temp2->val+temp1->val+c;
                c=s/10;
                s=s%10;
                temp2->val=s;
                if(c && temp2->next==NULL)
                {
                        nn=new ListNode;
                        nn->val=c;
                        temp2->next=nn;
                        temp2->next->val=c;
                }

                temp2=temp2->next;
                temp1=temp1->next;
            }
            while(temp2!=NULL)
            {
                s=temp2->val+c;
                c=s/10;
                s=s%10;
                temp2->val=s;
                if(c &&temp2->next==NULL )
                {
                    nn=new ListNode;
                    nn->val=c;
                    temp2->next=nn;
                    temp2->next->val=c;
                    c=0;
                }
                
                
             temp2=temp2->next;   
            }
          
            return l2;
        }
            

        
    }
};
