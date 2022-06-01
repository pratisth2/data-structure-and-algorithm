class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        string temp="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=' ')
            {
                temp.push_back(s[i]);
            }
            
            if(i!=0 && s[i]==' '  && s[i-1]!=' ')
            {
                ans=temp+ans;
                ans=' '+ ans;
             //   cout<<ans<<"";
                temp="";
            }
             
        }
        ans=temp+ans;
        if(ans[0]==' ')
        {
            ans.erase(0,1);
        }
        return ans;
    }
};