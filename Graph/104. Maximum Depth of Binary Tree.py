# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        depth = 0
        if root == None:
            return 0
        else:
            nodes = [root]
        while nodes:
            depth += 1
            new_list = []
            for n in nodes:
                if n.left:
                    new_list.append(n.left)
                if n.right:
                    new_list.append(n.right)
            nodes = new_list
        return depth
    
        '''
        # recursive
        def maxD(root, i):
            if root == None:
                return i
            else:
                i += 1
                return(max(maxD(root.left, i), maxD(root.right, i)))
        return maxD(root, 0)
        '''