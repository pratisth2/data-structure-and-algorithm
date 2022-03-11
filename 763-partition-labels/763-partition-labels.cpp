class Solution {
public:
    vector<int> partitionLabels(string s) {
     unordered_map<char,int>m;
        vector<int>v;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]=i;
        }
        int prev=-1;
        int mx=0;
        for(int i=0;i<s.length();i++)
        {
            mx=max(mx,m[s[i]]);
            if(mx==i)
            {
                v.push_back(mx-prev);
                prev=mx;
            }
        }
        return v;
    }
};