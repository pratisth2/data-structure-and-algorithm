class Solution {
public:
  bool ispalin(int i, int j, string s)
  {
      
        while(i<j)
        {
            if(s[i]==s[j])
            {
                i++;
                j--;
            }
            else
                return false;
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
                return ispalin(i+1,j,s) || ispalin(i,j-1,s);
        }
        return true;
    }
   
};