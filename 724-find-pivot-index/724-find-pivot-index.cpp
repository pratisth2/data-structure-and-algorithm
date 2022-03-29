class Solution {
public:
    int pivotIndex(vector<int>& nums) {
                int prefixsum[nums.size()];
        prefixsum[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
           prefixsum[i]=prefixsum[i-1]+nums[i];
        }
        int suffixsum[nums.size()];
        suffixsum[nums.size()-1]=nums[nums.size()-1];
          for(int i=nums.size()-2;i>=0;i--)
        {
           suffixsum[i]=suffixsum[i+1]+nums[i];
        }      
          for(int i=0;i<nums.size();i++)
          {
              if(prefixsum[i]==suffixsum[i])
              {
                  return i;
              }
          }
        return -1;
    
        
    }
};