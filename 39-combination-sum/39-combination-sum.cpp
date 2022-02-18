class Solution {
public:
 
    void subse(vector<vector<int>>&v, vector<int>&candidates, vector<int>&ans,int target,int i)
    {
        if(i==candidates.size())
        {
            if(target==0)
            {
                v.push_back(ans);
            }
            return;
        }
        if(candidates[i]<=target)
        {
            ans.push_back(candidates[i]);
            subse(v,candidates,ans,target-candidates[i],i); //  pick the element
            ans.pop_back();
            
        }
          subse(v,candidates,ans,target,i+1); // not to pick element
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ans;
        vector<vector<int>>v;
        subse(v,candidates,ans,target,0);
        return v;
           
    }
};