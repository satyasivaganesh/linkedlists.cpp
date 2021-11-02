class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        t=[]
        while(head):
            t.append(head.val)
            head=head.next
        t.reverse()
        l=len(t)
        if l==0:
            return None
        nn=ListNode(t[0])
        y=nn
        for i in range(1,l):
            y.next=ListNode(t[i])
            y=y.next
        return nn
