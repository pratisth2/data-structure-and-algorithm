class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
        
    }
    bool solve(vector<vector<char>>&board)
    {
        for(int i=0;i<board.size();i++)
        {
            for(int j=0; j<board[0].size();j++)
            {
                if(board[i][j]=='.')
                {
                    for(char a='1'; a<='9';a++)
                    {
                        if(isvalid(i,j,board, a)) {
                            board[i][j]=a;
                        if(solve(board)==true) return true;
                        else
                            board[i][j]='.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    bool isvalid(int row, int col, vector<vector<char>>&board, char a )
    {
        for(int i=0;i<9;i++)
        {
            if(board[i][col]==a)
            {
                return false;
            }
            if(board[row][i]==a)
            {
                return false;
            }
            if(board[3*(row/3)+i/3 ][3*(col/3)+i%3]==a)
            {
                return false;
            }
        }
        return true;
    }
};