class Solution {
public:
    bool ispalin(string s, int i, int j)
    {
        while(i<j)
        {
            if(s[i]==s[j])
            {
                i++;
                j--;
            }
            else
            {
                return false;
            }
            
        }
        return true;
    }
    bool validPalindrome(string s) {
    int i=0;
        int j=s.size()-1;
        while(i<j)
        {
            if(s[i]==s[j])
            {
            i++;
                j--;
            }
            else
            {
                return ispalin(s,i+1,j)|| ispalin(s,i,j-1);
                }
            
    }
        return true;
    }
};