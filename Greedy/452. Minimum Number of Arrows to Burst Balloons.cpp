class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = size(points);
        if (n==0)
            return 0;
        sort(points.begin(), points.end(), [](vector<int>& a, vector<int>& b){
            return a[1] < b[1];
        });
        int count = 0;
        int prev = points[0][1];
        for (int i = 1; i < n; i++){
            if (points[i][0] <= prev){
                count++;
            }
            else{
                prev = points[i][1];
            }
        }
        return n - count;
    }
};