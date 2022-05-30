// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    vector<int> sumClosest(vector<int>arr, int x)
    {
        // code here
        int l=0;
        int h=arr.size()-1;
        vector<int>v;
      
        int mini=INT_MAX;
        int fir,sec;
        while(l<h)
        {
            if(abs(arr[l]+arr[h]-x)<mini)
            {
                mini=abs(arr[l]+arr[h]-x);
                fir=arr[l];
                sec=arr[h];
            }
         if(arr[l]+arr[h]>x)
         {
             h--;
         }
         else
         {
             l++;
         }
        }
        
        
        return {fir,sec};
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.sumClosest(arr, x);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends