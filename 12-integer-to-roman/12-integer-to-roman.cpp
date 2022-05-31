class Solution {
public:
    string intToRoman(int num) {
        string res="";
        vector<int>code{1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string>s{"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        for(int i=0;i<code.size();i++)
        {
            while(num>=code[i])
            {
                res+=s[i];
                num-=code[i];
            }
        }
        return res;
        
    }
};