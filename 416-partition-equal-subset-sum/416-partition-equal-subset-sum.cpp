class Solution {
public:
       bool subsetsum(int idx, int k, vector<int>&arr, vector<vector<int>>&dp)
    {
        if(k==0) return true;
        if(idx==0) return (arr[0]==k);
        if(dp[idx][k]!=-1) return dp[idx][k];
        bool nottake=subsetsum(idx-1,k,arr,dp);
        bool take=false;
        if(arr[idx]<=k)
        {
            take=subsetsum(idx-1,k-arr[idx],arr,dp);
        }
        return dp[idx][k]=take||nottake;
    }
    bool canPartition(vector<int>& nums) {
          int n=nums.size();
          int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
         }
        if(sum%2) return false;
        int k=sum/2;
        vector<vector<int>>dp(n+1,vector<int>(k+1,-1));
        return subsetsum(nums.size()-1,k,nums,dp);
    }
};