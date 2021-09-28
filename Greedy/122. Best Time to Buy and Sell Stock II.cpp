class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = size(prices);
        if (n == 0)
            return n;
        int count = 0;
        for (int i = 1; i < n; ++i){
            if (prices[i] > prices[i-1]){
                count = count + prices[i] - prices[i-1];
            }
        }
        return count;
    }
};