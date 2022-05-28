// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
       const int N=1e6+2;
       bool check[N];
       for(int i=0;i<N;i++)
       {
           check[i]=false;
       }
       for(int i=0;i<n;i++)
       {
           if(arr[i]>=0)
           {
               check[arr[i]]=true;
           }
       }
       int ans=-1;
       check[0]=true;
       for(int i=0;i<N;i++)
       {
           if(check[i]==false)
           {
               ans=i;
               break;
           }
       }
       return ans;
    } 
};

// { Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
}   // } Driver Code Ends