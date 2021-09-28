class Solution {
public:
    int xorSUM(vector<int>& nums, int s, int i){
        if (i == size(nums))
            return s;
        return (xorSUM(nums, nums[i] ^ s, i + 1) + xorSUM(nums, s, i + 1));
    }
    int subsetXORSum(vector<int>& nums) {
        return xorSUM(nums, 0, 0);
    }
};