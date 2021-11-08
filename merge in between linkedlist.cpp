class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *temp1,*temp2,*temp3;
        temp2=list1;
        for(int i=0;i<=b;i++)
        {
            temp2=temp2->next;
        }
        temp1=list1;
        for(int i=0;i<a-1;i++)
        {
            temp1=temp1->next;
        }
        temp1->next=list2;
        temp3=list2;
        while(temp3->next)
        {
            temp3=temp3->next;
        }
        temp3->next=temp2;
        return list1;
    }
};
