class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n == 1)
            return 1;
        float x = n;
        while (x > 0){
            x = x / 4;
            if (x == 1)
                return 1;
        }
        return 0;
    }
};