class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode *y,*temp;
        int x,z;
        temp=head;
        vector<int>t;
        while(temp)
        {
            x=temp->val;
            y=temp->next;
            z=0;
            while(y)
            {
                if(y->val>x)
                {
                    z=y->val;
                    t.push_back(y->val);
                    break;
                }
                y=y->next;
            }
            if(z==0)
            {
                t.push_back(z);
            }
            temp=temp->next;
            
            
        }
        return t;
        
    }
};
