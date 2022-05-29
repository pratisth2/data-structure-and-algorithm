// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int subsetsum(int idx, int k, int arr[], vector<vector<int>>&dp)
    {
        if(k==0) return 1;
        if(idx==0) return (arr[0]==k);
        if(dp[idx][k]!=-1) return dp[idx][k];
        int nottake=subsetsum(idx-1,k,arr,dp);
        int take=0;
        if(arr[idx]<=k)
        {
            take=subsetsum(idx-1,k-arr[idx],arr,dp);
        }
        return dp[idx][k]=take||nottake;
    }
    int equalPartition(int N, int arr[])
    {
          int sum=0;
        for(int i=0;i<N;i++)
        {
            sum+=arr[i];
         }
        if(sum%2) return 0;
        int k=sum/2;
        vector<vector<int>>dp(N+1,vector<int>(k+1,-1));
        return subsetsum(N-1,k,arr,dp);
    
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  // } Driver Code Ends