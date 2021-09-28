class Solution:
    def islandPerimeter(self, grid: List[List[int]]) -> int:
        ans = 0
        l1 = len(grid)
        l2 = len(grid[0])
        for i in range(l1):
            for j in range(l2):
                if grid[i][j] == 1:
                    ans += 4
                    if j < l2 - 1 and grid[i][j+1] == 1:
                        ans -= 2
                    if i < l1 - 1 and grid[i+1][j] == 1:
                        ans -= 2
        return ans