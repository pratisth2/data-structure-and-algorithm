class Solution {
public:
    bool isokay(vector<int>&bloomDay, int m,int k, int mid)
    {
        int count=0;
        int size=0;
       for(int i=0;i<bloomDay.size();i++)
       { 
           if(bloomDay[i]<=mid) // if it bloom within the days assume if not then 
           {
               size++;   // flower collected
           }
           else
           {
               size=0;  // then flowe collected 0;
           }
           if(size==k)  // if flower collected is equal to given flower
           {
               count++;  // count bouquet
               size=0;
           }
           
           
       }
        if(count>=m)   
        {
            return true;
        }
        else
        {
            return false;
        }
    
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int l=1;
        int r=1e9;
        int ans=-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(isokay(bloomDay,m,k,mid))
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