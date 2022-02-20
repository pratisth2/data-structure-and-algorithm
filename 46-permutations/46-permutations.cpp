class Solution {
public:
  void perm(vector<vector<int>>&ans, vector<int>&v, vector<int>&nums, int mark[])
  {
      if(v.size()==nums.size())
      {
          ans.push_back(v);
          return;
      }
      for(int i=0;i<nums.size();i++)
      {
          if(!mark[i])
          {
              v.push_back(nums[i]);
                  mark[i]=1;
              perm(ans,v,nums,mark);
          mark[i]=0;
          v.pop_back();
      }
  }
  }
   vector<vector<int>> permute(vector<int>& nums) {
       vector<vector<int>>ans;
       vector<int>v;
       int mark[nums.size()];
       for(int i=0;i<nums.size();i++)
       {
           mark[i]=0;
       }
       perm(ans,v,nums,mark);
       return ans;
   }
};