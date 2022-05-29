class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        int longeststreak=0;
        for(auto i:nums)
        {
            if(!s.count(i-1))
            {
                int curr=i;
                int currstreak=1;
                while(s.count(curr+1))
                {
                    curr+=1;
                    currstreak+=1;
                }
                longeststreak=max(longeststreak,currstreak);
            }
        }
        return longeststreak;
        
    }
};