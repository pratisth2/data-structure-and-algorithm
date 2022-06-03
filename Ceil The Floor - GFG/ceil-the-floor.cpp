// { Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}
// } Driver Code Ends


pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(arr[0]>x)
        {
            return {-1,arr[0]};
        }
        if(arr[n-1]<=x)
        {
            return {arr[n-1],-1};
        }
        if(arr[i]<x && arr[i+1]>x)
        {
            return {arr[i],arr[i+1]};
        }
    }
    return {x,x};
    // code here
}