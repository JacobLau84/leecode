class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        if len(prices) == 0:
            return 0
        ans = 0
        for i in range(len(prices) - 1):
            if prices[i+1] > prices[i]:
                ans += prices[i+1] - prices[i]
        return ans