class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<m;j++)
            {
                int a=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=a;
                
            }
        }
         for(int row=0;row<n;row++)
         {
             int i=0;
             int j=matrix[row].size()-1;
             while(i<j)
             {
                 int a=matrix[row][i];
                 matrix[row][i++]=matrix[row][j];
                 matrix[row][j--]=a;
             }
         }
      
    }
};