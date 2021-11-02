class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *next;
        next=node->next;
        node->val=next->val;
        node->next=next->next;
        
        
    }
};
