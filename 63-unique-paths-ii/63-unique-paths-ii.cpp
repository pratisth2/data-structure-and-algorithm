class Solution {
public:
  //  int mod=2*10e9;
    int unique(int i, int j,int r, int c, vector<vector<int>>&obstacleGrid, vector<vector<int>>&dp)
    {
         if(i==r || j==c)
        {
            return 0;
        }
         if(obstacleGrid[i][j]==1)
        {
             return 0;
         }
            
        if(i==r-1&& j==c-1)
        {
            return 1;
         }
     if(dp[i][j]!=-1)
     {
         return dp[i][j];
     }
        int up=unique(i+1,j,r,c,obstacleGrid,dp);
        int left=unique(i,j+1,r,c,obstacleGrid,dp);
        
        return dp[i][j]=up+left;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
            
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>>dp(m, vector<int>(n,-1));
         // vector<vector<int>>grid(m, vector<int>(n,0));
        return unique(0,0,m,n,obstacleGrid,dp);
    }
};