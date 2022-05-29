// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
public:
 
    int findMin(int arr[], int n){
        //complete the function here
       int l=0;
       int h=n-1;
       int ans=-1;
       while(l<h)
       {
           int mid=l+(h-l)/2;
           if(arr[mid]<arr[n-1])
           {
               h=mid;
           }
           else
           {
               l=mid+1;
           }
       }
       return arr[l];
    }
};

// { Driver Code Starts.


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}  // } Driver Code Ends