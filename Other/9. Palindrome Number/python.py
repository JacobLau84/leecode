class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return 0
        return str(x) == str(x)[::-1]

'''
class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return 0
        x_reverse = 0
        x_origin = x
        while x:
            x_reverse *= 10
            x_reverse = x_reverse + x % 10
            x = int(x / 10)
        return x_reverse == x_origin
'''