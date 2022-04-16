class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
          int l=0;
        int r=arr.size()-1;
        int ans=-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(mid+1<arr.size() && arr[mid]>arr[mid+1])
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