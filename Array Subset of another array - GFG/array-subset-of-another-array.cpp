// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends


string isSubset(int a1[], int a2[], int n, int m) {
   unordered_map<int,int>mp;
   for(int i=0;i<m;i++)
   {
       mp[a2[i]]++;
   }
   unordered_map<int,int>::iterator itr;
   for(int i=0;i<n;i++)
   {
       itr=mp.find(a1[i]);
       if(itr!=mp.end())
       {
           mp.erase(a1[i]);
       }
   }
   if(mp.empty())
   {
       return "Yes";
   }
   else
   {
       return "No";
   }
    
}