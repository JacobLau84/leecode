class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        int n = size(s);
        int start = 0;
        int end = 0;
        unordered_map<char, int> d;
        for (int i = 0; i < n; i++){
            d[s[i]] = i;
        }
        for (int i = 0; i < n; i++){
            end = max(end, d[s[i]]);
            if (i == end){
                ans.push_back(end - start + 1);
                start = end + 1;
            }
        }
        return ans;
    }
};