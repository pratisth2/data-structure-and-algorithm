class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
      
        int ans=1;
        int mx=0;
        for(int i=0;i<nums.size();i++)
        {
            int start=nums[i];
            if(s.find(start-1) !=s.end()) continue;
            while(s.find(start)!=s.end())
            {
                start++;
            }
             ans=  start-nums[i];
            mx=max(mx,ans);
        }
        return mx;
    }
};