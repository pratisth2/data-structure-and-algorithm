class Solution {
public:
    int kthFactor(int n, int k) {
        
        vector<int>ans;
        int res=-1;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                ans.push_back(i);
            }
        }
        for(int i=0;i<ans.size();i++)
        {
            if((k-1)==i)
            {
                res=ans[i];
                break;
            }
        }
       return res; 
    }
};