class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        st=[]
        smp=head
        fmp=head
        while fmp.next and fmp.next.next:
            st+=[smp.val]
            smp=smp.next
            fmp=fmp.next.next
        if fmp.next:
            st+=[smp.val]
        smp=smp.next
        while smp:
            if st[-1]!=smp.val:
                return 0
            smp=smp.next
            st.pop()
        else:
            return 1
