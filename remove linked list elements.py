# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeElements(self, head: Optional[ListNode], val: int) -> Optional[ListNode]:
        t=[]
        while(head):
            if head.val!=val:
                t.append(head.val)
            head=head.next
        if(len(t)==0):
            return None
        else:
            head=ListNode(t[0])
            temp=head
            for i in range(1,len(t)):
                nn=ListNode(t[i])
                temp.next=nn
                temp=temp.next
            return head
