class Solution {
public:
    bool isvalid(int i, int j, vector<vector<int>>&board)
    {
        return(i>=0 && i<board.size() && j>=0 && j<board[0].size());
      
    }
    void gameOfLife(vector<vector<int>>& board) {
         vector<int> dx = {0, 0, 1, 1, 1, -1, -1, -1}; //8 coordinated for neighbours
        vector<int> dy = {1, -1, 1, -1, 0, 0, 1, -1};
        
        for (int row = 0; row < board.size(); row++) {
            for (int col = 0; col < board[0].size(); col++) {
                
                int count_live_neighbors = 0;
                
                for (int i = 0; i < 8; i++) {
                    int curr_x = row + dx[i], curr_y = col +dy[i];
                    if (isvalid(curr_x, curr_y, board) && abs(board[curr_x][curr_y]) == 1)
                        count_live_neighbors++;
                }
                
                if (board[row][col] == 1 && (count_live_neighbors < 2 || count_live_neighbors > 3))
                    board[row][col] = -1;
                
                if (board[row][col] == 0 && count_live_neighbors == 3)
                    board[row][col] = 2;
            }
        }
        
        for (int row = 0; row < board.size(); row++) {
            for (int col = 0; col < board[0].size(); col++) {
                if (board[row][col] >= 1)
                    board[row][col] = 1;
                else
                    board[row][col] = 0;
            }
        }
//         int n=board.size();
//         int m=board[0].size();
            
//         vector<int>dx= {0, 0, 1, 1, 1, -1, -1, -1};
//         vector<int>dy={1, -1, 1, -1, 0, 0, 1, -1};
        
//         for(int i=0;i<board.size();i++)
//         {
//             for(int j=0;j<board[0].size();j++)
//             {
//                 int count=0;
//                 for(int k=0;k<8;k++)
//                 {
//                     int curr_x=i+dx[k], curr_y=j+dy[k];
                   
//                     if(isvalid(curr_x, curr_y, board) && abs(board[curr_x][curr_y])==1) count++;
//                     if(board[i][j]==1 && count<2 || count>3)
//                           board[i][j]=-1;
//                      if(board[i][j]==0 && count==3)
//                           board[i][j]=2;
//                 }
//             }
//         }
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<m;j++)
//             {
//                 if(board[i][j]>=1)
//                     board[i][j]=1;
//                 else
//                     board[i][j]=0;
//             }
//         }
    }
};