class Solution:
    def subsetXORSum(self, nums: List[int]) -> int:
        def xorSUM(s, i):
            if i == len(nums):
                return s
            return xorSUM(nums[i] ^ s, i + 1) + xorSUM(s, i + 1)
        return xorSUM(0, 0)