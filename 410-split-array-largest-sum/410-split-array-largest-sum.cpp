class Solution {
public:
    bool check(vector<int>&nums, int m, int mid)
         {
        if(m>nums.size())
        {
            return false;
        }
        int parts=1;
        int sum=0;
        int mx=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(sum+nums[i]<=mid)
            {
                sum=sum+nums[i];
            }
            else
            {
            parts++;
                sum=nums[i];
            }
        }
        if(parts<=m)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
    int splitArray(vector<int>& nums, int m) {
        int sum=0;
        int mx=-1;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            mx=max(mx,nums[i]);
        }
        int low=mx;
        int high=sum;
        int ans=-1;
        for(int i=0;i<nums.size();i++)
        {
            int mid=low+(high-low)/2;
            if(check(nums,m,mid))
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
};