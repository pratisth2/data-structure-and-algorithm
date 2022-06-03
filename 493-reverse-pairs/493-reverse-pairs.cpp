class Solution {
public:
       int count=0;
    int merge(vector<int>& nums,int l,int mid,int u)
    {
        int total=0,j=mid+1,i;
        for( i=l;i<=mid;i++)
        {
            while(j<=u && nums[i]>2LL * nums[j])
                j++;
            
            total=total+(j-(mid+1));
        }
        
        i=l;j=mid+1;
        vector<int> temp;
        
        while(i<=mid && j<=u)
        {
            if(nums[i]>=nums[j])
            {
                temp.push_back(nums[j]);
                j++;
            }
            else
            {
                temp.push_back(nums[i]);
                i++;
            }
            
        }
            while(j<=u)
            {
                temp.push_back(nums[j]);
                j++; 
            }
        
       
            while(i<=mid)
            {
                temp.push_back(nums[i]);
                i++;
            }
        
         for (i = l; i <= u; i++) {
    nums[i] = temp[i - l];
  }
        return total;
        
    }
    int divide(vector<int>& nums,int l,int u)
    {
        if(l<u)
        {
            int mid=(u+l)/2;
            divide(nums,l,mid);
            divide(nums,mid+1,u);
            count=count+merge(nums,l,mid,u);
            
        
        return count;
        }
        return 0;
        
        
    }
    int reversePairs(vector<int>& nums) {

        return divide(nums,0,nums.size()-1);
        
    }
};
//     int total=0;
//     int merge(vector<int>&nums, int l, int mid, int high)
//     {
//         int count=0;
//          int j=mid+1,  i;
//         for( i=l;i<=mid;i++)
//         {
//         while(j<=high && nums[i] > 2LL*nums[j])
//             j++;
        
//             count=count+(j-(mid+1));
//         }
//         vector<int>temp;
//          i=l; j=mid+1;
//         while(i<=mid && j<=high)
//         {
//             if(nums[i]<=nums[j])
//             {
//                 temp.push_back(nums[i++]);
//             }
//             else
//             {
//                 temp.push_back(nums[j++]);
//             }
//         }
//             while(i<=mid)
//             {
//                 temp.push_back(nums[i++]);
//             }
//             while(j<=high)
//             {
//                 temp.push_back(nums[j++]);
//             }
        
//         for(int i=l;i<=high;i++)
//         {
//             nums[i]=temp[i-l];
//         }
//         return count;
//     }
//     int mergesort(vector<int>nums, int l, int h)
//     {
//            if(l<h)
//           {
//                 int mid=(h+l)/2;
//                mergesort(nums, l,mid);
//                mergesort(nums,mid+1,h);
//                total= total+ merge(nums,l,mid,h);
//                return total;
//           }
//         return 0;     
        
        
//     }
//     int reversePairs(vector<int>& nums) {
//      return  mergesort(nums,0,nums.size()-1);
        
//     }
// };