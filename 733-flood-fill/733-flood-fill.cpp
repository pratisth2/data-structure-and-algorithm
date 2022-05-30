class Solution {
public:
       bool check(int i, int j, int n, int m, vector<vector<int>>&image, int color)
    {
        if(i>=0 && i<n && j>=0 && j<m && image[i][j]==color  )
            return true;
        else
            return false;
    }
       void dfs(int i, int j, int n, int m, vector<vector<int>>&image,int newColor, int color)
    {
        image[i][j]=newColor;
        if(check(i+1,j,n,m,image,color))
            dfs(i+1,j,n,m,image,newColor,color);
        if(check(i,j-1,n,m,image,color))
            dfs(i,j-1,n,m,image,newColor,color);
        if(check(i-1,j,n,m,image,color))
            dfs(i-1,j,n,m,image,newColor,color);
        if(check(i,j+1,n,m,image,color))
            dfs(i,j+1,n,m,image,newColor,color);
        
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
      int n=image.size();
        int m=image[0].size();
        int color=image[sr][sc];
        if(color==newColor)
        {
            return image;
        }
        dfs(sr,sc,n,m,image,newColor,color);
        return image;
        
    }
};