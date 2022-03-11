class Solution {
public:
    vector<int> partitionLabels(string s) {
        int left=0;
        int right=-1;
        int i=0;
        vector<int>v;
         while(right<0 || right<s.length()-1)
         {
             for(int j=s.length()-1;j>=right;j--)
             {
                 if(s[i]==s[j])
                 {
                     if(right<0 || j>right)
                     {
                     right=j;   cout<<right;
                     }
                 }
                 
             }
             i++;
               if(i>=right || right==s.length()-1)
        {
            v.push_back(right-left+1);
            left=right+1;
            i=right+1;
        }
         }
       
        return v;
    }
};