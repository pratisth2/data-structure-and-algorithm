class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mx=INT_MIN;
        int p=1;
        for(int i=0;i<nums.size();i++)
        {
           p=p*nums[i];
            mx=max(mx,p);
            if(p==0)
            {
                p=1;
            }
        }
        p=1;
        for(int i=nums.size()-1; i>=0;i--)
        {
             p=p*nums[i];
            mx=max(mx,p);
            if(p==0)
            {
                p=1;
            }
        }
        return mx;
    }
};