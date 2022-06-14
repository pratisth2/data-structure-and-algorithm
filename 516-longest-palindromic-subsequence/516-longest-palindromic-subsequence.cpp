class Solution {
public:
     int helper(int i , int j, string &s,vector<vector<int>>&dp)
    {
          if(i==j) return 1;
          if(i>j) return 0;
        
        if(dp[i][j]) return dp[i][j];
        if(s[i]==s[j])
        {
            return 2+ helper(i+1,j-1,s,dp);
        }
        return dp[i][j]= max(helper(i,j-1,s,dp),helper(i+1,j,s,dp));
    }
    int longestPalindromeSubseq(string s) {
      int n=s.size();
          vector<vector<int>>dp(n,vector<int>(n));
        return helper(0,n-1,s,dp);
        
        
        
    }
};