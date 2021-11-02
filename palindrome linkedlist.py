class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        t=[]
        while(head):
            t.append(head.val)
            head=head.next
        i=0
        j=len(t)-1
        k=0
        while(i<=j):
            if t[i]!=t[j]:
                k=1
            i+=1
            j-=1
        if k==1:
            return 0
        return 1
            
