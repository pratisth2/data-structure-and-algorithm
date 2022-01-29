class Solution {
public:
    bool help(vector<int>&piles, int h, int  mid)
    {
      int time=0;
        for(int i=0;i<piles.size();i++)
        {
            time+=ceil(piles[i]*1.0/mid);
        }
        if(time<=h)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
            int r=1e9;
        int ans=-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(help(piles,h,mid))
            {
                ans=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
            
        }
        return ans;
        
    }
};