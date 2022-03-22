class Solution {
public:
    int maximumSwap(int num) {
     string s=to_string(num);
       int mx=-1;
        int index=-1;
        int left=-1;
        int li=-1;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(mx==s[i])
            {
                continue;
            }
            if(mx<s[i])
            {
                mx=s[i];
                index=i;
            }
            else
            {
                left=i;
                li=index;
            }
        }
        if(left==-1)
        {
            return num;
        }
        swap(s[left],s[li]);
        return stoi(s);
    }
};