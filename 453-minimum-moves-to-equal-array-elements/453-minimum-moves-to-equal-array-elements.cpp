class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mn=INT_MAX;
        for(auto i: nums)
        {
            mn=min(mn,i);
        }
        int ans=0;
        for(auto j:nums)
        {
            ans+=abs(mn-j);
        }
        return ans;
    }
};