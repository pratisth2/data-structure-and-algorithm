// class Solution {
// public:
//     vector<vector<int>>dir{{0,1},{0,-1},{-1,0},{1,0}};
//     void traverse(vector<vector<int>>&grid, int i, int j, queue<pair<int,int>>&q)
//     {
//         grid[i][j]=2;
//         q.push({i,j});
       
//         for(int idx=0; idx<dir.size();idx++)
//         {
//             int row=i+dir[idx][0];
//             int col=j+dir[idx][1];
//             if(row>=0 && col>=0 && row<grid.size() && col<grid[0].size() && grid[i][j]==1)
//             {
//                //  cout<<q.front().first <<" "<<q.front().second;
//                 traverse(grid,row,col,q);
//             }
//         }
//     }
//     int flipzero(vector<vector<int>>&grid, queue<pair<int,int>>&q)
//     {
//         int level=0;
//         while(!q.empty())
//         {
//             int n=q.size();
//             while(n--)
//             {
//                 int r=q.front().first;
//                 int c=q.front().second;
//                 q.pop();
//                 for(int idx=0; idx<dir.size();idx++)
//                 {
//                     int row=r+dir[idx][0];
//                      int col=c+dir[idx][1];
//                     if(row>=0 && col>=0 && row<grid.size() && col<grid[0].size() )
//                     {
//                         if(grid[row][col]==0)
//                         {
//                             grid[row][col]=2;
//                             q.push({row,col});
//                         }
//                         else if(grid[row][col]==1)
//                         {
//                              return level;
//                         }
//                     }
                        
//                 }
//             }
//             level++;
//         }
//         return level;
//     }
//     int shortestBridge(vector<vector<int>>& grid) {
//         queue<pair<int,int>>q;
//         for(int i=0;i<grid.size();i++)
//         {
//             for(int j=0;j<grid[0].size();j++)
//             {
//                 if(grid[i][j]==1)
//                 {
//                     traverse(grid,i,j,q);
//                     return flipzero(grid,q);
//                 }
//             }
//         }
//         return 0;
        
//     }
// };
class Solution {
public:
    
    vector<vector<int>> dir{{0,1},{0,-1},{-1,0},{1,0}};
    void initQ(vector<vector<int>>& grid,int i,int j,queue<pair<int,int>>& Q)
    {
         grid[i][j]=2;
         Q.push({i,j});
        for(int ind=0;ind<dir.size();ind++)
        {
            int row=i+dir[ind][0];
            int col=j+dir[ind][1];
            
            if(row>=0 && col>=0 && row<grid.size() && col<grid[0].size() && grid[row][col]==1 )
            {
               
                
                    initQ(grid,row,col,Q);
            }
                
        }
        
    }
    int fourdir(vector<vector<int>>& grid,queue<pair<int,int>> &Q)
    {
      int level=0;
        while(!Q.empty())
        {
             int n=Q.size();
           //cout<<n<<" ";
            while(n--)    //q 01  02 03 04 12 13  56 679 9
            {
                int row=Q.front().first;
                int col=Q.front().second;
                
               cout<<row<<" "<<col<<" "<<endl;;
                Q.pop();
                 for(int ind=0;ind<dir.size();ind++)
                 {
                     int r=row+dir[ind][0];
                     int c=col+dir[ind][1];
                 //  cout<<row<<" "<<col<<endl;
                     if(r>=0 && c>=0 && r<grid.size() && c<grid[0].size())
                     {
                         if(grid[r][c]==0)
                         {
                             grid[r][c]=2;
                             Q.push({r,c});
                         }
                         else if(grid[r][c]==1)
                             return level;
                     }
                 }
                //cout<<endl;
            }
            level++;
        }
      return level;          
     }
    int shortestBridge(vector<vector<int>>& grid) {
      queue<pair<int,int>> Q;
      for(int i=0;i<grid.size();i++)
      {
          for(int j=0;j<grid[0].size();j++)
          {
              if(grid[i][j]==1)
              {
                  initQ(grid,i,j,Q);
                 // cout<<Q.size();
                  return fourdir(grid,Q);
              }
          }
      }
        return 0;
        
        
    }
};