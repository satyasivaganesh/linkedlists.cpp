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
    ListNode* middleNode(ListNode* head) {
        ListNode *temp;
        int l=0;
        temp=head;
        while(temp)
        {
            l++;
            temp=temp->next;
        }
        cout<<l;
        int x=0;
        temp=head;
        while(x<l/2)
        {
            cout<<x;
            x++;
            temp=temp->next;
        }
        head=temp;
        return head;
        
    }
};
