# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def mergeTrees(self, root1: Optional[TreeNode], root2: Optional[TreeNode]) -> Optional[TreeNode]:
        if not root1 or not root2:
            return root1 or root2
        from queue import Queue
        queue1 = Queue()
        queue2 = Queue()
        queue1.put(root1)
        queue2.put(root2)
        while not queue1.empty() and not queue2.empty():
            node1, node2 = queue1.get(), queue2.get()
            if node1 and node2:
                node1.val += node2.val
                if node1.left == None and node2.left != None:
                    node1.left = TreeNode(0)
                if node1.right == None and node2.right != None:
                    node1.right = TreeNode(0)
                queue1.put(node1.left)
                queue1.put(node1.right)
                queue2.put(node2.left)
                queue2.put(node2.right)
        return root1