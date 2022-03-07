class Solution {
    
public:
    unordered_map<int,int>m;
    int tribonacci(int n) {
        if(n==0)
        {
            return m[n]=0;
        }
        if(n==1 || n==2)
        {
            return m[n]=1;
        }
        if(m[n]==0)
        {
            return   m[n]= tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
        }
        else
        {
            return m[n];
        }
        
    }
};