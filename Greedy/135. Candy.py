class Solution:
    def candy(self, ratings: List[int]) -> int:
        size = len(ratings)
        if size == 0:
            return 0
        num = [1] * size
        for i in range(1, size):
            if ratings[i-1] < ratings[i]:
                num[i] = num[i-1] + 1
        for i in range(size - 1, 0, -1):
            if ratings[i-1] > ratings[i]:
                num[i-1] = max(num[i-1], num[i] + 1)
        return sum(num)