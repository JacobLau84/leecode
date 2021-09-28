class Solution:
    def isPowerOfFour(self, n: int) -> bool:
        if n == 1:
            return 1
        while n > 0:
            n = n / 4
            if n == 1:
                return 1
        return 0