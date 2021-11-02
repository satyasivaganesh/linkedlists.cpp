# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        t=[]
        x=[]
        temp=head
        while temp!=None:
            t.append(temp.val)
            temp=temp.next;
        for i in t:
            if i not in x:
                x.append(i)
        l=len(x)
        if(l>0):
            y=ListNode(x[0])
            head=y
            for i in range(1,l):
                y.next=ListNode(x[i])
                y=y.next
            return head
        head=None
        return head
