# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        '''
        rev = []
        new_head = head
        while new_head:
            rev.append(new_head.val)
            new_head = new_head.next
        for i in range(len(rev)-1, -1, -1):
            if rev[i] != head.val:
                return 0
            head = head.next
        return 1
        '''
        x = []
        new_head = head
        while new_head:
            x.append(new_head.val)
            new_head = new_head.next
        while head:
            if x.pop() != head.val:
                return 0
            head = head.next
        return 1
        