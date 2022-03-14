class Solution {
public:
    bool vol(char e)
    {
       if(e=='a' ||e=='e' ||e=='i' ||e=='o' ||e=='u' ||e=='A' ||e=='E' ||e=='I' ||e=='O' ||e=='U') 
           return true;
        return false;
    }
    string reverseVowels(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<j)
        {
            if(vol(s[i]))
            {
                while(!vol(s[j]))
                {
                    j--;
                }
                swap(s[i],s[j]);
                j--;
                
            }
            i++;
            
        }
        return  s;
        }
    };