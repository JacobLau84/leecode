# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeElements(self, head: Optional[ListNode], val: int) -> Optional[ListNode]:
        if head == None:
            return None
        if head.val == val:
            return self.removeElements(head.next, val)
        head.next = self.removeElements(head.next, val)
        return head
        '''
        dummy_node = ListNode(-1)
        dummy_node.next = head
        current_node = dummy_node
        while current_node.next != None:
            if current_node.next.val == val:
                current_node.next = current_node.next.next
            else:
                current_node = current_node.next
        return dummy_node.next
        '''