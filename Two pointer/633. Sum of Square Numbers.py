class Solution:
    def judgeSquareSum(self, c: int) -> bool:
        left = 0
        right = int(sqrt(c))
        while left <= right:
            cur = left ** 2 + right ** 2
            if cur == c:
                return 1
            if cur < c:
                left += 1
            else:
                right -= 1
        return 0