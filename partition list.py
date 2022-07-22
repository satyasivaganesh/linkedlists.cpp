class Solution:
    def partition(self, head: Optional[ListNode], x: int) -> Optional[ListNode]:
        if head==None:
            return head
        t1=[]
        t2=[]
        temp=head
        while temp:
            if temp.val<x:
                if len(t1):
                    t1[-1].next=temp
                t1+=[temp]
            else:
                if len(t2):
                    t2[-1].next=temp
                t2+=[temp]
            temp=temp.next
        #print(t1,t2)
        t2[-1].next=None;
        t1[-1].next=t2[0];
        return t1[0]
