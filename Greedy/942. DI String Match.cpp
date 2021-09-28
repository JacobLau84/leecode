class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.size();
        vector<int> ans(n + 1, 0);
        
        int c = 0;
        for (int i = 0; i < n; i++){
            if (s[i] == 'I'){
                ans[i] = c;
                c++;
            }
        }
        
        ans[n] = c;
        c++;
        
        for (int i = n - 1; i > -1; i--){
            if (s[i] == 'D'){
                ans[i] = c;
                c++;
            }
        }
        
        return ans;
    }
};