# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def averageOfLevels(self, root: Optional[TreeNode]) -> List[float]:
        ans = []
        cur = [root]
        tmp = []
        while cur:
            s = 0
            for i in cur:
                s += i.val
                if i.left:
                    tmp.append(i.left)
                if i.right:
                    tmp.append(i.right)
            ans.append(s / len(cur))
            cur = tmp
            tmp = []
        return ans