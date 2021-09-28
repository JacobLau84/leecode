class Solution:
    def lemonadeChange(self, bills: List[int]) -> bool:
        five = 0
        ten = 0
        for b in bills:
            if b == 5:
                five += 1
            elif b == 10 and five > 0:
                ten += 1
                five -= 1
            elif b == 20 and ten > 0 and five > 0:
                ten -= 1
                five -= 1
            elif b == 20 and five > 2:
                five -= 3
            else:
                return 0
        return 1