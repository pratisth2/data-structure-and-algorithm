class Solution {
public:
    int nextGreaterElement(int n) {
         string s=to_string(n);
        int x=-1;
        int i=1;
        for(int i=s.size()-1;i>0;i--)
        {
            if(s[i]>s[i-1])
            {
                x=i-1;
                break;
            } //cout<<i;
        }
      
        sort(s.begin()+x+1, s.end());
       // cout<<x<<"\n";
           if(x==-1)
        {
            return -1;
        }
      //  cout<<s<<"\n";
        for(int i=x+1;i<s.size();i++)
        {
            if(s[i]>s[x])
            {
                char a=s[i];
                s[i]=s[x];
                s[x]=a;
                break;
            }
        }
     
        long long int b=stoll(s);
        if(b>INT_MAX)
        {
            return -1;
        }
        return b;
    }
};