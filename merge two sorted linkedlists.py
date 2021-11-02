class Solution:
    def mergeTwoLists(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        t=[]
        while(l1):
            t.append(l1.val)
            l1=l1.next
        while(l2):
            t.append(l2.val)
            l2=l2.next
        t.sort()
        l=len(t)
        if l==0:
            return None
        x=ListNode(t[0])
        y=x
        for i in range(1,l):
            y.next=ListNode(t[i])
            y=y.next
        return x
            
