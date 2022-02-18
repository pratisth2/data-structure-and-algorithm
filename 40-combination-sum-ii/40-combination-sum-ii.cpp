class Solution {
public:
    void comb(vector<vector<int>>&v, vector<int>&ans, vector<int>&candidates, int target, int i)
    {
            if(target==0)
            {
                v.push_back(ans);
                return;
            }
            
        for(int j=i;j<candidates.size();j++)
        {
              if(target<candidates[j])
            {
            return;
               }
            if(j==i || candidates[j]!=candidates[j-1])
            {
            ans.push_back(candidates[j]);
            comb(v,ans,candidates,target-candidates[j],j+1);
            ans.pop_back();
               }
    
    }
    }

    
   
   vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
       sort(candidates.begin(),candidates.end());
         vector<vector<int>>v;
       vector<int>ans;
      
       comb(v,ans,candidates,target,0);
       return v;
      
    }
};
        
    