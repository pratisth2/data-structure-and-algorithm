class Solution {
public:
    // void nextPermutation(vector<int>& nums) {
    //     int i, j;
    //     int n= nums.size();
    //     int a=0;
    //     for(i=n-2; i>=0; i--){
    //         if(nums[i]<nums[i+1]){
    //             break;
    //         }
    //     }
    //     if(i<0)
    //         reverse(nums.begin(), nums.end());
    //     else{
    //         for(j=n-1; j>=0; j--){
    //             if(nums[i]<nums[j]){
    //                 break;
    //             }
    //         }
    //         swap(nums[i], nums[j]);
    //         reverse(nums.begin()+i+1, nums.end());
    //     }
    // }
    // };
    void nextPermutation(vector<int>& nums) {
        int n=nums.size(), i,l;
        for( i=n-2; i>=0;i--)
        {
            if(nums[i]<nums[i+1]){
                break;
            }
        }
        if(i<0)
        {
            reverse(nums.begin(), nums.end());
        }
        else
        {
            for( l=n-1;l>=0;l--)
            {
                if(nums[i]<nums[l]){
                    break;
                }
            }
        
        swap(nums[i],nums[l]);
        reverse(nums.begin()+i+1, nums.end());
        }
    }
};