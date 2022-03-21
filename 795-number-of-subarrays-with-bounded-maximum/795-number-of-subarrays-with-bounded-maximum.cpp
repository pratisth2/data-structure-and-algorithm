class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
      int i=0;
        int j=0;
        int count=0;
        int prev=0;
        while(j<nums.size())
        {
            if(left<=nums[j] && nums[j]<=right)
            {
                prev=j-i+1;
                cout<<prev;
                count+=prev;
            }
            else if(nums[j]<left)
            {
                count+=prev;
            }
            else
            {
            i=j+1;
            prev=0;
            }
            j++;
            
        }
        return count;
    }
};