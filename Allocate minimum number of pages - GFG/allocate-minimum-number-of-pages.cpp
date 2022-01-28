// { Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool isokay(int A[], int N, int M, int mid)
    {
             if(N<M)
            {
                return false;
            }
        int distribute=1;
        int total=0;
        for(int i=0;i<N;i++)
        {
            if(A[i]>mid)
            {
                return false;
            }
          
            if(total+A[i]<=mid)
            {
                total+=A[i];
               // distribute=0;
                
            }
            else
            {
                distribute++;
                total=A[i];
            }
          
        }
        if(distribute<=M)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int findPages(int A[], int N, int M) 
    {
        int l=0;
        int r=1e6;
        int ans=-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(isokay(A,N,M,mid))
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

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
  // } Driver Code Ends