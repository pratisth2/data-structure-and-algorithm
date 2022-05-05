class Solution {
public:
    void moveZeroes(vector<int>& nums) {
            int ball=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                ball++;
            }
            else if(ball>0)
            {
                nums[i-ball]=nums[i];
                nums[i]=0;
            }
      }
    }
};