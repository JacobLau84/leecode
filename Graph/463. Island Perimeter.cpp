class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans = 0;
        int l1 = size(grid);
        int l2 = size(grid[0]);
        for (int i = 0; i < l1; i++){
            for (int j = 0; j < l2; j++){
                if (grid[i][j] == 1){
                    ans += 4;
                    if (j < l2 - 1 && grid[i][j+1] == 1)
                        ans -= 2;
                    if (i < l1 - 1 and grid[i+1][j] == 1)
                        ans -= 2;
                }
            }
        }
        return ans;
    }
};