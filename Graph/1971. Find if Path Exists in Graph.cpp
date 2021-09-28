class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        vector<bool> visit(n, 0);
        vector<vector<int>> g(n);
        
        for (auto e : edges){
            g[e[0]].push_back(e[1]);
            g[e[1]].push_back(e[0]);
        }
        
        queue<int> q;
        q.push(start);
        visit[start] = 1;
        
        int i;
        while (not q.empty()){
            i = q.front();
            q.pop();
            if (i == end){
                return true;
            }
            for (auto n : g[i]){
                if (visit[n] == 0){
                    visit[n] = 1;
                    q.push(n);
                }
            }
        }
        return false;
        
    }
};