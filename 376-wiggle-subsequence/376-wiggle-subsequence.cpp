class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if(nums.size()<2) return 1;
        int peak=1;
        int valley=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>nums[i-1]) peak=valley+1;
            else if(nums[i]<nums[i-1]) valley=peak+1;
                
        }
        return max(peak,valley);
    }
};