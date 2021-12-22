class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        temp1=head
        temp2=head
        t=[]
        while temp2.next and temp2.next.next:
            temp1=temp1.next
            temp2=temp2.next.next
        if temp2.next:
            temp1=temp1.next
        temp2=temp1.next
        while temp2:
            t+=[temp2]
            temp2=temp2.next
        temp1.next=None
        temp1=head
        temp2=head.next
        for i in range(len(t)):
            x=t[-1]
            temp1.next=x
            x.next=temp2
            temp1=temp2
            temp2=temp2.next
            t.pop()
