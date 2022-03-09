class Solution {
public:
    bool isgreat(vector<int>&nums, int val)
    {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(val==nums[i])
            {
                count++;
            }
        }
        return count>nums.size()/3;
    }
    vector<int> majorityElement(vector<int>& nums) {
        int val1=nums[0];
        int count1=1;
        int val2=nums[0];
        int count2=0;
        for(int i=1;i<nums.size();i++)
        {
            if(val1==nums[i])
            {
                count1++;
            }
            else if(val2==nums[i])
            {
                count2++;
            }
            else
            {
                if(count1==0)
                {
                    val1=nums[i];
                    count1=1;
                }
                else if(count2==0)
                {
                    val2=nums[i];
                    count2=1;
                }
                else
                {
                    count1--;
                    count2--;
                }
            }
        }
        vector<int>ans;
        if(isgreat(nums,val1)==true)
        {
            ans.push_back(val1);
        }
        if(val1!=val2 && isgreat(nums,val2)==true)
        {
            ans.push_back(val2);
        }
            return ans;
    }

};