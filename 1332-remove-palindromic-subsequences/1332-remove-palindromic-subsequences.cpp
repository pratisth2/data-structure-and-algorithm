class Solution {
public:
    int removePalindromeSub(string s) {
        int i=0;
        int j=s.size()-1;
        bool isplain=true;
        while(i<=j)
        {
            if(s[i]!=s[j]) isplain=false;
            i++;
            j--;
        }
        if(isplain) return 1;
        else
            return 2;
    }
};