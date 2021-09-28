class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n == 1)
            return true;
        double x = n;
        while (x > 0){
            x = x / 3;
            if (x == 1)
                return true;
        }
        return false;
        /*
        int const Max3PowerInt = 1162261467;
        if (n <= 0 || n > Max3PowerInt) 
            return false;
        return Max3PowerInt % n == 0;
        */
    }
};