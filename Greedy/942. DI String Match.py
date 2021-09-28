class Solution:
    def diStringMatch(self, s: str) -> List[int]:
        n = len(s)
        
        ans = [0] * (n + 1)
        c = 0
        
        for i in range(n):
            if s[i] == 'I':
                ans[i] = c
                c += 1
        ans[n] = c
        c += 1
        
        for i in range(n - 1, -1, -1):
            if s[i] == 'D':
                ans[i] = c
                c += 1
        return ans