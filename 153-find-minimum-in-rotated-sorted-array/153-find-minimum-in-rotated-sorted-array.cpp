class Solution {
public:
 
 int findMin(vector<int>& nums) {
     int l=0;
     int r=nums.size()-1;
     int ans=-1;
     while(l<=r)
     {
         int mid=l+(r-l)/2;
         if(nums[mid]>nums[nums.size()-1])
         {
             l=mid+1;
         }
         else
         {
            ans=mid;
            r=mid-1;
         }
     }
     return nums[ans] ;
 }
     
};