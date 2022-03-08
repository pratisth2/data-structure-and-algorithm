class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       vector<int>ans;
        int sq;
        for(int i=0;i<nums.size();i++)
        {
            sq=nums[i]*nums[i];
            ans.push_back(sq);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};