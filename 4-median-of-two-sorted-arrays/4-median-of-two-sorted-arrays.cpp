class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;
        int k=0;
        vector<int>v;
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]<nums2[j])
            {
                v.push_back(nums1[i]);
                i++;
                k++;
            }
            else
            {
                v.push_back(nums2[j]);
                j++;
                k++;
            }
        }
        while(i<nums1.size())
        {
             v.push_back(nums1[i]);
                i++;
                k++; 
        }
         while(j<nums2.size())
        {
             v.push_back(nums2[j]);
                j++;
                k++; 
        }
        double median=0.0;
        int mid=v.size()/2;
        if(v.size() %2==1)
        {
            median=v[mid];
        }
        else
        {
            median=(v[mid]+v[mid-1])/2.0;
      }
        return median;
    
        
    }
};