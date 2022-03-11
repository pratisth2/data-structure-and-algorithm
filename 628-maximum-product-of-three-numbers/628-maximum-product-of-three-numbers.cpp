class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=nums.size();
        int ans=max(nums[i-1]*nums[0]*nums[1],nums[i-1]*nums[i-2]*nums[i-3] );
        return ans;
        
    }
};