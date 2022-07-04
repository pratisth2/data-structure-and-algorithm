class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(n==0)
        {
            return "";
        }
        sort(strs.begin(),strs.end());
        string p=strs[0];
        string q=strs[n-1];
        string ans="";
        for(int i=0;i<p.size();i++)
        {
            if(p[i]==q[i])
            {
                ans=ans+p[i];
            }
            else
            {
                break;
            }
        }
        return ans;
   }
};