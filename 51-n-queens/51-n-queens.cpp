class Solution {
public:
    bool issafe(int row, int col, vector<string>board, int n)
    {
        int dupr=row;
        int dupc=col;
        // upar check
        while(row>=0 && col>=0)
        {
            if(board[row][col]=='Q') return false;
            row--;
            col--;
        }
       row=dupr;
        col=dupc;
        while(col>=0)
        {
            if(board[row][col]=='Q') return false;
            col--;
        }
        row=dupr;
        col=dupc;
        while(row<n && col>=0)
        {
            if(board[row][col]=='Q') return false;
            row++;
            col--;
        }
    return true;
    }
    void fill(int col, vector<string>&board, vector<vector<string>>&ans, int n)
    {
        if(col==n)
        {
            ans.push_back(board);
            return;
        }
        for(int row=0; row<n;row++)
        {
            if(issafe(row,col,board,n))
            {
                board[row][col]='Q';
                 fill(col+1,board, ans,n);
                board[row][col]='.';
                
            }
        }
        
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
        {
            board[i]=s;
        }
        fill(0,board,ans,n);
        return ans;
        
    }
};