class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
             int sum=0;
        
        for(int i=0;i<k;i++)
        {
            sum+=cardPoints[i];
        }
           int maxi=sum;
            for(int j=cardPoints.size()-1, y=k-1; y>=0 &&j >=0;y--,j--)
            {
                sum=sum-cardPoints[y]+cardPoints[j];
                maxi=max(maxi,sum);
            }
        
        return maxi;
    }  
};