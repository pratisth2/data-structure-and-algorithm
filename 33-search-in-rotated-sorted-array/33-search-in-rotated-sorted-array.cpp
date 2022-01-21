class Solution {
public:
    int binarysearch(vector<int>&nums, int target)
    {
        int l=0;
        int r=nums.size()-1;
        int ans=-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(target==nums[mid]) 
            {
                return mid;
            }
              else if(target<nums[mid])
               {
                   if(nums[mid]<nums[r])
                   {
                       r=mid-1;
                   }
                   else if(target<nums[l])
                   {
                       l=mid+1;
                   }
                   else
                   {
                       r=mid-1;
                   }
               }
                   else
                  {
                 if(nums[mid]>nums[l])
                   {
                       l=mid+1;
                   }
                   else if(target>nums[r])
                   {
                       r=mid-1;
                   }
                   else
                   {
                       l=mid+1;
                   }
            }
        }
        return -1;
    }
           
    int search(vector<int>& nums, int target) {
       return  binarysearch(nums,target);
    }
        
    
};