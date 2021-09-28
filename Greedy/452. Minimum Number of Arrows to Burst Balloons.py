class Solution:
    def findMinArrowShots(self, points: List[List[int]]) -> int:
        if len(points) == 0:
            return 0
        points.sort(key = lambda x : x[1])
        prev = points[0][1]
        n = 0
        for i in range(1, len(points)):
            if points[i][0] <= prev:
                n += 1
            else:
                prev = points[i][1]
        return len(points) - n