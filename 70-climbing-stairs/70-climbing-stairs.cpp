class Solution {
public:
    int climb(int n, vector<int>&dp)
    {
        if(n==0)
        {
            return 1;
        }
          if(n<0)
          {
           return 0;
           }
        if(dp[n]!=-1)
        {
            return dp[n];
        }
      //  cout<<"hello"<<endl;
        int a=climb(n-1,dp);
        int b=climb(n-2,dp);
        int c=a+b;
        dp[n]=c;
        return c;
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
       return climb(n,dp);
    }
};