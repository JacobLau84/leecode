# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
        # iterative
        from queue import Queue
        q = Queue()
        q.put([root, root])
        while not q.empty():
            node1, node2 = q.get()
            if node1 == None and node2 == None:
                continue
            elif node1 == None or node2 == None:
                return 0
            elif node1.val != node2.val:
                return 0
            q.put([node1.left, node2.right])
            q.put([node1.right, node2.left])
        return 1        

        '''
        # recursive
        def isSym(left, right):
            if left == None and right == None:
                return 1
            if left != None and right != None and left.val == right.val:
                return isSym(left.left, right.right) and isSym(left.right, right.left)
            return 0
        return isSym(root, root)
        '''