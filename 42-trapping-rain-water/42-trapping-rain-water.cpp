class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right=n-1;
        int maxleft=height[left];
        int maxright=height[right];
        int water=0;
        while(left<right)
        {
            if(height[left]<height[right])
            {
                
                maxleft=max(maxleft, height[left]);
                water+=maxleft-height[left];
            left++;
            }
            else
            {
                
                maxright=max(maxright,height[right]);
                 water+=maxright-height[right];   
                right--;
            }
        }
        return water;
        
    }
};