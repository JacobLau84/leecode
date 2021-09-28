class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0, j = size(numbers) - 1, sum;
        while (i < j){
            sum = numbers[i] + numbers[j];
            if (sum == target)
                break;
            if (sum < target)
                ++i;
            else
                --j;
        }
        return vector<int>{i+1, j+1};
    }
};