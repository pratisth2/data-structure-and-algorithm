class Solution {
public:

    int search(vector<int>&nums, int target, bool firstlast)
    {
        int l=0;
        int r=nums.size()-1;
        int ans=-1;
       while(l<=r)
       {
           int mid=l+(r-l)/2;
           if(target<nums[mid])
           {
               r=mid-1;
           }
           else if(target>nums[mid])
           {
               l=mid+1;
           }
           else
           {
               ans=mid;
               if(firstlast==true)
               {
                   r=mid-1;
               }
               else
               {
                   l=mid+1;
               }
           }
       }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>v;
        v.push_back(search(nums,target,true));
        v.push_back(search(nums,target,false));
        return v;
       
    }
        
     
};