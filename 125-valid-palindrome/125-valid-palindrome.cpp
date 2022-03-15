class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        while(j && i<j)
        {
            if(iswalnum(s[i])==false)
            {
                i++;
                continue;
            }
            if(iswalnum(s[j])==false)
            {
                j--;
                continue;
            }
             if(tolower(s[i])!=tolower(s[j]) )
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
        
    }
};