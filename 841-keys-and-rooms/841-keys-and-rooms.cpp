class Solution {
public:
    void dfs(int src,vector<vector<int>>&rooms,vector<bool>&visited)
    {
      //  int n=rooms.size();
        visited[src]=1;
        for(int i=0;i<rooms[src].size();i++)
        {
            if(!visited[rooms[src][i]])
            {
                dfs(rooms[src][i],rooms,visited); 
            }
        }
        return;
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int V=rooms.size();
        vector<bool>visited(V,0);
          dfs(0,rooms,visited);
        for(int i=0;i<V;i++)
        {
            if(!visited[i])
            {
                    return false;
            }
        }
        return true;
        
        
        
        
        
    }
};