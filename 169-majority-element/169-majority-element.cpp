class Solution {
public:
    int maj(vector<int>&nums)
    {
        int val=nums[0];
        int count=1;
        for(int i=1;i<nums.size();i++)
        {
            if(val==nums[i])
            {
                count++;
            }
            else
            {
                count--;
            }
            if(count==0)
            {
                val=nums[i];
                count=1;
            }
        }
        return val;
    }
    int majorityElement(vector<int>& nums) {
        int value=maj(nums);
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(value==nums[i])
            {
                c++;
            }
        }
        if(c>nums.size()/2)
        {
            return value;
        }
        else
        {
            return 0;
        }
    }
};