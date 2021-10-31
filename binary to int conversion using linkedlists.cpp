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
    int getDecimalValue(ListNode* head) {
        ListNode *temp;
        int l=0,sum=0;
        temp=head;
        while(temp)
        {
            l++;
            temp=temp->next;
            
        }
        l=l-1;
        temp=head;
        while(temp){
            sum=sum+pow(2,l)*temp->val;
            temp=temp->next;
            l--;
        }
        return sum;
        
    }
};
