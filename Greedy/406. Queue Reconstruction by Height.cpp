class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        vector<vector<int>> ans;
        sort(people.begin(), people.end(), [](vector<int> &a, vector<int> &b){
            return a[0] > b[0] || (a[0] == b[0] && (a[1] < b[1]));
        });
        for (auto p : people){
            ans.insert(ans.begin() + p[1], p);
        }
        return ans;
    }
};