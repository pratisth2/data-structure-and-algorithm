class Solution {
public:
    void helper(vector<vector<int>>&ans, int idx, vector<int>&nums)
    {
        if(idx>=nums.size())
        {
           ans.push_back(nums);
            return;
        }
        for(int i=idx;i<nums.size();i++)
        {
            swap(nums[idx],nums[i]);
            helper(ans,idx+1,nums);
             swap(nums[idx],nums[i]);
            
        }
    }
   vector<vector<int>> permute(vector<int>& nums) {
       vector<vector<int>>ans;
       int idx=0;
       helper(ans,0,nums);
       return ans;
   }
     
};