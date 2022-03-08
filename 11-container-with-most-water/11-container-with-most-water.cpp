class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int water=0;
        while(i<j)
        {
            int b=j-i;
            int ht=min(height[i],height[j]);
            water=max(water,ht*b);
            if(height[i]<height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return water;
        
    }
};