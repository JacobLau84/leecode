# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        # recursive
        flag = 0
        if (p == q == None):
            return 1
        elif (p != None and q != None):
            if (p.val == q.val):
                if (self.isSameTree(p.left, q.left)):
                    flag = self.isSameTree(p.right, q.right)
            return flag
        else:
            return 0
        
        '''
        # BFS
        if p == q == None:
            return 1
        if p == None or q == None:
            return 0

        from queue import Queue
        q1 = Queue()
        q1.put(p)
        q2 = Queue()
        q2.put(q)
        visit=[]
        
        while not q1.empty():
            tmp_p = q1.get()
            tmp_q = q2.get()
            if (tmp_p and not tmp_q) or (not tmp_p and tmp_q):
                return 0
            if (tmp_p and tmp_q):
                if tmp_p.val != tmp_q.val:
                    return 0
                if tmp_p.val not in visit:
                    visit.append(tmp_p.val)
                    q1.put(tmp_p.left)
                    q1.put(tmp_p.right)
                    q2.put(tmp_q.left)
                    q2.put(tmp_q.right)
        if q2.empty():
            return 1
        return 0
        '''