// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int max_sum(int A[],int N);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }

        cout<<max_sum(A,N)<<endl;
        /*keeping track of the total sum of the array*/

    }
}
// } Driver Code Ends


/*You are required to complete this method*/
int max_sum(int A[],int N)
{
//Your code here
   int sum=0;
   int s0=0;
   for(int i=0;i<N;i++)
   {
       sum+=A[i];
       s0+=i*A[i];
   }
   int mx=s0;
   int si=s0;
   for(int i=0;i<N-1;i++)
   {
       int sipi=si+sum-N*A[N-i-1];
       if(sipi>mx)
       {
           mx=sipi;
       }
       si=sipi;
   }
   return mx;
}