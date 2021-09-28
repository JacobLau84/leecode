class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if (intervals.empty())
            return 0;
        sort(intervals.begin(), intervals.end(), [](vector<int>& a, vector<int>& b){
            return a[1] < b[1];
        });
        int n = 0;
        int prev = intervals[0][1];
        for (int i = 1; i < size(intervals); ++i){
            if (intervals[i][0] < prev){
                n++;
            }
            else{
                prev = intervals[i][1];
            }
        }
        return n;
    }
};