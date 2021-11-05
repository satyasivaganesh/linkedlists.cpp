class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        t=[]
        x=0
        while(head):
            if head in t:
                x=1
                break
            t.append(head)
            head=head.next
        if x==1:
            return 1
        return 0
            
        
