"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""

class Solution:
    def maxDepth(self, root: 'Node') -> int:
        depth = 0
        if root == None:
            return 0
        else:
            nodes = [root]
        while nodes:
            depth += 1
            new_list = []
            for n in nodes:
                for c in n.children:
                    new_list.append(c)
            nodes = new_list
        return depth