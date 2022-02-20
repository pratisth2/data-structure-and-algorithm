class Solution {
public:
    void sub(set<vector<int>>&ans, vector<int>&nums, vector<int>&v, int i)
    {
        if(i==nums.size())
        {
            ans.insert(v);
            return;
        }
        v.push_back(nums[i]);
        sub(ans,nums,v,i+1);
        v.pop_back();
        sub(ans,nums,v,i+1);
    }
   
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>>ans;
          vector<vector<int>>a;
            vector<int>v;
                 sub(ans,nums,v,0);
        for(auto i:ans)
        {
            a.push_back(i);
        }
        return a;
    }
        
    
};