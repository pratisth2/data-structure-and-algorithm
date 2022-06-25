class Solution {
public:
    int digit(int n)
    {
           int sum=0 , d;
        while(n)
        {
             d=n%10;
            sum+=d*d;
            n=n/10;
        }
        return sum;
    }
    bool isHappy(int n) {  //  using hair torotoise method
    int slow, fast;
        slow=fast=n;
        do
        {
            slow=digit(slow);
            fast=digit(fast);
            fast=digit(fast);
            if(fast==1) return 1;
        }while(slow!=fast);
        return 0;
    }
};