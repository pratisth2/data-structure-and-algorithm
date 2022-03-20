class Solution {
public:
    string breakPalindrome(string palindrome) {
        if(palindrome.size()==1)
        {
            return "";
        }
        int i=0;
        int j=palindrome.size()-1;
        int k=j;
        while(i<j)
        {
           if(palindrome[i]>'a')
           {
               palindrome[i]='a';
               return palindrome;
           }
            i++;
            j--;
        }
        palindrome[k]='b';
        return palindrome;
        
    }
};