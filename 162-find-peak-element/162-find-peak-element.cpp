class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l=0;
        int r=nums.size()-1;
        int ans=-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
           
                if(mid+1<nums.size() && nums[mid]<nums[mid+1])
                {
                    l=mid+1;
                }
                else
                {
                    ans=mid;
                    r=mid-1;
                }
        }
        return ans;
      
        
    }
};