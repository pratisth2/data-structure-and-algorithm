class Solution {
public:
    int climb(int n, vector<int>&dp)
    {
        if(n==0) return 1;
        if(dp[n]!=-1) return dp[n];
        int onestep=0, twostep=0;
        onestep=climb(n-1,dp);
        if(n-2>=0) twostep=climb(n-2,dp);
        return dp[n]=onestep+twostep;
    }
    int climbStairs(int n) {
       vector<int>dp(n+1,-1);
       return climb(n,dp);
    }
//       int climbStairs(int n) {
//        vector<int>dp(n+1);
//        dp[0]=1;   
       
//     }
};