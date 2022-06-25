class Solution {
public:
    int countAsterisks(string s) {
      stringstream ss(s);
        string word;
        int count=0;
        int res=0;
        
        while(getline(ss,word,'|'))
        {
            if(count%2==0)
            {
                for(int i=0 ;i<word.size();i++)
                {
                    if(word[i]=='*')
                    {
                        res++;
                    }
                }
            }
            count++;
        }
        return res;
    }
};