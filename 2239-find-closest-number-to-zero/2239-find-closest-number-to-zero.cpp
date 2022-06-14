class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
       int mx=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(abs(nums[i])<abs(mx))
            {
                mx=nums[i];
            }
            else if(abs(nums[i]==abs(mx)))
            {
                mx=nums[i];
            }
                
        }
        return mx;
    }
};