// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        int l=0;
        int r=a.size()-1;
       // int ans=-1;
        while(l<r)
        {
            int mid=l+(r-l)/2;
            if( a[mid]<a[mid+1])
            {
                l=mid+1;
            }
            else
            {
                r=mid;
            }
            
            
            
        }
        return a[l];
        
        
    }
};



// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	vector<int>a(n);
    	for(int i = 0; i < n; i++)
    		cin>>a[i];
    	Solution ob;
    	int ans = ob.findPeakElement(a);
    	cout << ans << "\n";
    }
	return 0;
}

  // } Driver Code Ends