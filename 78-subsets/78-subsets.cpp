class Solution {
public:
       void sub(vector<vector<int>>&ans, vector<int>&v,vector<int>&nums,int i)
       {
           if(i==nums.size())
           {
               ans.push_back(v);
               return;
           }
           v.push_back(nums[i]);
           sub(ans,v,nums,i+1);
           v.pop_back();
           sub(ans,v,nums,i+1);
       }
    vector<vector<int>> subsets(vector<int>& nums) {
       
        vector<int>v;
        vector<vector<int>>ans;
        sub(ans,v,nums,0);
        return ans;
        
    }
};