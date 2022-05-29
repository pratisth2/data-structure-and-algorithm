class Solution {
public:

    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        vector<vector<int>>adj(n);
        int u,v,curr,second;
        queue<int>q;
        vector<bool>vis(n);
        for(int i=0;i<edges.size();i++)
        {
            u=edges[i][0];
            v=edges[i][1];
            adj[u].push_back(v);
             adj[v].push_back(u);
        }
        // bfs
        q.push(start);
        vis[start]=true;
        while(!q.empty())
        {
            curr=q.front();
            for(int i=0;i<adj[curr].size();i++)
            {
                second=adj[curr][i];
                if(!vis[second])
                {
                    q.push(second);
                    vis[second]=true;
                }
            }
            q.pop();
        }
        if(vis[end])
        {
            return true;
        }
        return false;
    }
};