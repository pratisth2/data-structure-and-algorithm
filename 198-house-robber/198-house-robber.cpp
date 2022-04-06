class Solution {
public:
    // int robutil(int idx, vector<int>&nums, vector<int>&dp)
    // {
    //     if(idx==0)
    //     {
    //         return nums[idx];
    //     }
    //     if(idx<0)
    //     {
    //         return 0;
    //     }
    //     if(dp[idx]!=-1)
    //     {
    //         return dp[idx];
    //     }
    //     int pick=nums[idx]+ robutil(idx-2,nums,dp);
    //     int notpick=0+robutil(idx-1,nums,dp);
    //     return dp[idx]= max(pick, notpick);
    // }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n);
        dp[0]=nums[0];
        int neg=0;
        for(int i=1;i<n;i++)
        {
            int pick=nums[i];
            if(i>1)
            {
                pick+=dp[i-2];
            }
            int notpick=0+dp[i-1];
            dp[i]=max(pick,notpick);
        }
    return dp[n-1];
        
    }
};