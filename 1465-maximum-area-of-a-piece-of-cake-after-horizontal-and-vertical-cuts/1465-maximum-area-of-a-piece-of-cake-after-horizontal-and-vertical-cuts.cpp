class Solution {
public:
    int mod=1e9+7;
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) 
    {
     horizontalCuts.push_back(h);
        sort(horizontalCuts.begin(), horizontalCuts.end());
      verticalCuts.push_back(w);
        sort(verticalCuts.begin(), verticalCuts.end());
        long long maxh=horizontalCuts[0];
        long long maxw=verticalCuts[0];
        for(int i=1;i<horizontalCuts.size();i++)
        {
            maxh=max(maxh, (long long)horizontalCuts[i]-horizontalCuts[i-1]);
        }
         for(int i=1;i<verticalCuts.size();i++)
        {
            maxw=max(maxw, (long long)verticalCuts[i]-verticalCuts[i-1]);
        }
        return (maxh%mod  *maxw%mod) %mod;
    }
    
};   