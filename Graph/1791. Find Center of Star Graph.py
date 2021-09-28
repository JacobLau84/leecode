class Solution:
    def findCenter(self, edges: List[List[int]]) -> int:
        n = len(edges)
        ans = [0] * (n + 1)
        for e in edges:
            a, b = e[0] - 1, e[1] - 1
            ans[a] += 1
            ans[b] += 1
            if ans[a] == n:
                return a + 1
            if ans[b] == n:
                return b + 1