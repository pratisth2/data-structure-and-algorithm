class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;
     
        int sum=0;
          m[sum]=1;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            int rsum=sum-k;
            if(m.find(rsum)!=m.end())
            {
                ans+=m[rsum];
            }
            m[sum]++;
        }
        return ans;
    }
};  