class Solution:
    def fib(self, n: int) -> int:
        '''
        # recursion
        if n == 0:
            return 0
        if n == 1:
            return 1
        return self.fib(n - 1) + self.fib(n - 2)
        '''

        # interative
        if n < 2:
            return n
        a = 0
        b = 1
        for i in range(2, n + 1):
            c = a + b
            a = b
            b = c
        return c