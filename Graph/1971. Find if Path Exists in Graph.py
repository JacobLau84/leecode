class Solution:
    def validPath(self, n: int, edges: List[List[int]], start: int, end: int) -> bool:
        from queue import Queue
        visit = [0] * n
        g = [[] for _ in range(n)]
        for e in edges:
            g[e[0]].append(e[1])
            g[e[1]].append(e[0])
        
        q = Queue()
        visit[start] = 1
        q.put(start)
        
        while not q.empty():
            i = q.get()
            if i == end:
                return 1
            for n in g[i]:
                if visit[n] == 0:
                    visit[n] = 1
                    q.put(n)
        return 0