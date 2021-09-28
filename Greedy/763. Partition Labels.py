class Solution:
    def partitionLabels(self, s: str) -> List[int]:
        d = {}
        for i, ch in enumerate(s):
            d[ch] = i
        start = 0
        end = 0
        ans = []
        for i, ch in enumerate(s):
            end = max(end, d[ch])
            if i == end:
                ans.append(end - start + 1)
                start = end + 1
        return ans