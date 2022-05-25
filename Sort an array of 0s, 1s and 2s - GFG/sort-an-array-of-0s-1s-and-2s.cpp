// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here
      int l=0;
      int h=n-1;
      int m=0;
      while(m<=h)
      {
          if(a[m]==0)
          {
              swap(a[m],a[l]);
              l++;
              m++;
          }
          else if(a[m]==1)
          {
              m++;
          }
          else
          {
              swap(a[m],a[h]);
              h--;
          }
      }
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends