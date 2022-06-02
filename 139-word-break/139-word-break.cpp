class Solution {
public:
    int dp[301];
    int helper(int idx, string s, set<string>&wordDict)
    {
        
        if(idx==s.size())
        {
            return 1;
        }
      
        string temp;
          if(dp[idx]!=-1)
        {
            return dp[idx];
        }
        for( int j=idx;j<s.size();j++)
        {
            temp+=s[j];
            if(wordDict.find(temp)!=wordDict.end())
            {
             if(helper(j+1,s,wordDict))
               return dp[idx]= 1;
            }
        }
        return dp[idx]=0;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        
   
        set<string>st;
          memset(dp,-1,sizeof dp);
        for(int i=0;i<wordDict.size();i++)
        {
            st.insert(wordDict[i]);
        }
        return helper(0,s,st);
    }
};