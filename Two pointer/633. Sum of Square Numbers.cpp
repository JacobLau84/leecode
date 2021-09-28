class Solution {
public:
    bool judgeSquareSum(int c) {
        int left = 0;
        int right = sqrt(c);
        long long cur;
        while (left <= right){
            cur = pow(left, 2) + pow(right, 2);
            if (cur == c)
                return true;
            if (cur < c)
                left++;
            else
                right--;
        }
        return false;
    }
};