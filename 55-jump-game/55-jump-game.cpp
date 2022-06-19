class Solution {
public:
   
    bool canJump(vector<int>& nums) {
        if(nums.size()==1) return true;
        int d=0;
        for(int i=0;i<=d;i++)
        {
            d= max(d, i+nums[i]);
            if(d>=nums.size()-1)
            {
                return true;
            }
        }
        return false;
    }
};