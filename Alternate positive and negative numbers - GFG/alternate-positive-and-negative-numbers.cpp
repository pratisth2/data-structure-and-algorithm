// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    vector<int>pos;
	    vector<int>neg;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>=0) pos.push_back(arr[i]);
	        if(arr[i]<0) neg.push_back(arr[i]);
	        }
	        int i=0;
	        int j=0;
	        int idx=0;
	        while(i<pos.size() &&  j<neg.size())
	        {
	            arr[idx]=pos[i];
	            i++;
	            idx++;
	            arr[idx]=neg[j];
	            j++;
	            idx++;
	        }
	        while(i<pos.size())
	        {
	            arr[idx]=pos[i];
	            i++;
	            idx++;
	        }
	        while(j<neg.size())
	        {
	            arr[idx]=neg[j];
	            j++;
	            idx++;
	        }
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends