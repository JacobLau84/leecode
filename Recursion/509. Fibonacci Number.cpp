class Solution {
public:
    int fib(int n) {
        /*
        if (n < 2)
            return n;
        return fib(n - 1) + fib (n - 2);
        */
        
        if (n < 2)
            return n;
        int a = 0, b = 1, c;
        for (int i = 2; i < n + 1; i++){
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
};