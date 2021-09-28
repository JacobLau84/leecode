class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        long int x_reverse = 0;
        int x_origin = x;
        while (x){
            x_reverse = x_reverse * 10;
            x_reverse = x_reverse + x % 10;
            x = x / 10;
        }
        return x_origin == x_reverse;
    }
};