class Solution {
public:
    int isfound(vector<vector<int>>&matrix, int target)
    {
        int l=0;
        int h=matrix.size()-1;
        int lr=matrix[0].size()-1;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(matrix[mid][0]<=target && target<=matrix[mid][lr])
            {
                return mid;
            }
            else if(target>matrix[mid][0])
            {
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
        }
        return -1;
    }
    bool found(vector<vector<int>>&matrix, int r, int target)
    {
        int l=0;
        int h=matrix[0].size()-1;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(matrix[r][mid]==target)
            {
                return true;
            }
            else if(matrix[r][mid]<target)
            {
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       
       if(matrix.size()==1  && matrix[0].size()==1 && matrix[0][0]==target)
       {
           return true;
       }
        int r= isfound(matrix, target);
        if(r==-1)
        {
            return false;
        }
     bool okay= found(matrix, r,target);
        return okay;
        
    }
};