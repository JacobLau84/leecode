class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = size(edges);
        vector<int> ans(n + 1, 0);
        int a, b;
        for (auto e : edges){
            a = e[0] - 1;
            b = e[1] - 1;
            ans[a]++;
            ans[b]++;
            if (ans[a] == n)
                return a + 1;
            if (ans[b] == n)
                return b + 1;
        }
        return 0;
    }
};