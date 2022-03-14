class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int m=k%nums.size();  // 2 %1
        reverse(nums.begin(),nums.end());  // 7654321
        reverse(nums.begin(),nums.begin()+m); // 5674321
        reverse(nums.begin()+m,nums.end()); // 5671234
    }
      
};