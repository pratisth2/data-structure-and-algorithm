class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
     vector<int>ans(nums.size());
        int i=0;
        int j=nums.size()-1;
        int pos=nums.size()-1;
        while(i<=j)
        {
            if(nums[i]*nums[i]>nums[j]*nums[j])
            {
                ans[pos]=nums[i]*nums[i];
                i++;
            }
            else
            {
                ans[pos]=nums[j]*nums[j];
                j--;
            }
            pos--;
        }
        return ans;
    }
};