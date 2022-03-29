class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto s:m)
        {
            if(s.second>1)
            {
                return s.first;
            }
        }
        return -1;
    }
};