class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> ans(n, 0);
        int a, b;
        for (int i = 0; i < size(trust); ++i){
            a = trust[i][0] - 1;
            b = trust[i][1] - 1;
            ans[a] = -1;
            if (ans[b] != -1){
                ans[b]++;
            }
        }
        for (int i = 0; i < n; i++){
            if (ans[i] == (n - 1)){
                return (i + 1);
            }
        }
        return -1;
    }
};