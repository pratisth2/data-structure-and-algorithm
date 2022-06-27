class Solution {
public:
    int binarysearch(vector<int>&nums, int target)
    {
       int l=0;
        int h=nums.size()-1;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(target==nums[mid]) return mid;
            if(nums[l] <= nums[mid])
            {
                if(target>=nums[l] && target<=nums[mid])
                {
                    h=mid-1;
                }
                else
                {
                 l=mid+1;
                }
                
            }
            else 
            {
                if(target>=nums[mid] && target<= nums[h])
                {
                l=mid+1;
                }
                else
                {
                    h=mid-1;
                }
            }
        }
        return -1;
    }
    
           
    int search(vector<int>& nums, int target) {
       return  binarysearch(nums,target);
    }
        
    
};