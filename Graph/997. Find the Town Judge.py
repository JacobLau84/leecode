class Solution:
    def findJudge(self, n: int, trust: List[List[int]]) -> int:
        ans = [0] * n
        for i in trust:
            a, b = i[0] - 1, i[1] - 1
            ans[a] = -1
            if ans[b] != -1:
                ans[b] += 1
        for i in range(len(ans)):
            if ans[i] == (n - 1):
                return i + 1
        return -1