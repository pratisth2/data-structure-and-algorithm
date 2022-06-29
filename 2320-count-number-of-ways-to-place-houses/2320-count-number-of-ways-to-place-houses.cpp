class Solution {
public:
    int countHousePlacements(int n) {
      long mod=1000000007;
      long last=1;
        long lastsecond=1;
        long ans=0;
        for(int i=1;i<=n;i++)
        {
            ans=(last+lastsecond)%mod;
            last=lastsecond;
            lastsecond=ans;
        }
        return (ans%mod* ans%mod)%mod;
    }
};