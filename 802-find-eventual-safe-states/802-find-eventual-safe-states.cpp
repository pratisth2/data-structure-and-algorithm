class Solution {
public:
    bool checkcycle(int i, vector<vector<int>>&graph, vector<int>&visited)
    {
        visited[i]=1;
        for(auto j: graph[i])
        {
            if(visited[j]==0 && checkcycle(j,graph,visited) || visited[j]==1)
                return true;
        }
        visited[i]=2;
        return false;
        
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int>visited(graph.size()), result;
        for(int i=0;i<graph.size();i++)
        {
            if(visited[i]==2 || !checkcycle(i,graph,visited))
                result.push_back(i);
        }
        return result;
    }
};