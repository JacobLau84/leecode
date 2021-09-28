class Solution:
    def longestPalindrome(self, s: str) -> int:
        ss = []
        for c in s:
            if c not in ss:
                ss.append(c)
            else:
                ss.remove(c)
        if len(ss) > 0:
            return len(s) - len(ss) + 1
        else:
            return len(s)
        '''
        if s == None:
            return 0
        visit = {}
        ans = 0
        for c in s:
            if c not in visit:
                visit[c] = 1
            else:
                visit[c] += 1
            if visit[c] % 2 == 0:
                ans += 2
        for _, value in visit.items():
            if value % 2 == 1:
                ans += 1
                break
        return ans
        '''