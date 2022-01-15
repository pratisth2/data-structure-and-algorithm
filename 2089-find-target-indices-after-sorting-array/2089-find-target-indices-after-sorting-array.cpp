class Solution {
public:
    void search(vector<int>&nums, int target, vector<int>&res)
    {
         sort(nums.begin(),nums.end());
        int l=0;
        int r=nums.size()-1;
        int ans=-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
             if(target>nums[mid])
            {
                l=mid+1;
            }
            else if(target<nums[mid])
            {
                r=mid-1;
            }
            else
            {
                ans=mid;
            }
        }
        return ;
    }
    vector<int> targetIndices(vector<int>& nums, int target) {
       sort(nums.begin(),nums.end());
        vector<int>res;
        for(int i=0;i<nums.size();i++)
        {
            if(target==nums[i])
            {
                res.push_back(i);
            }
        }
        return res;
    }
};