class Solution {
public:
    int hIndex(vector<int>& citations) {
        int l=0;
        int h=citations.size()-1;
        int len=citations.size();
        int ans=-1;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(citations[mid]>=len-mid)
            {
                ans=mid;  
                h=mid-1;
            }
            else 
            { 
                
                l=mid+1;
            }
        }
        return len-l;
        
    }
};