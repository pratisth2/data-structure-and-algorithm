class Solution {
public:
    bool okay(int days, vector<int>&w, int mid)
    {
        bool ischeck=true;
        int total=0;
        int day=1;
        for(int i=0;i<w.size();i++)
        {
            if(w[i]>mid)
            {
                ischeck=false;
            }
            else if(total+w[i]<=mid)
            {
                total+=w[i];
            }
                else
                {
                    day++;
                    total=w[i];
                }
        }
        if(ischeck==false)
        {
            return false;
        }
        if(day<=days)
        {
            return true;
        }
        return false;
        
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int l=1;
        int r=500*50000;
        while(l<r)
        {
            int mid=l+(r-l)/2;
            if(okay(days,weights,mid)==true)
            {
                r=mid;
            }
            else
            {
                l=mid+1;
            }
        }
        return l;
    }
       
};