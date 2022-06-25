class Solution {
public:
    int add(int num)
    {
        int sum=0;
        int temp;
        while(num)
        {
            temp=num%10;
            sum+=temp;
            num/=10;
        }
        return sum; 
    }
    int addDigits(int num) {
       int slow;
        slow=num;
        //cout<<slow;
        while(slow!=0)
        {
            if(slow>=0 && slow<=9)
            {
                return slow;
            }
            slow=add(slow);
            cout<<slow;
    
        }
        return 0;
    }
};