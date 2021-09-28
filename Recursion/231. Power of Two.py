class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        if n == 1:
            return 1
        while n > 1:
            n /= 2
            if n == 1:
                return 1
        return 0
        # return n > 0 and not (n & n-1)