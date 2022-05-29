// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      unordered_set<int>s;
      for(int i=0;i<N;i++)
      {
          s.insert(arr[i]);
      }
      int longeststreak=0;
      for(int i=0;i<N;i++)
      {
          int n=arr[i];
          if(!s.count(n-1))
          {
              int curr=n;
              int currstreak=1;
              while(s.count(curr+1))
              {
                  curr+=1;
                  currstreak+=1;
              }
              longeststreak=max(longeststreak,currstreak);
          }
          
      }
      return longeststreak;
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends