class Solution {
public:
    void twosum2(vector<int>&numbers, int low, int high, int target, vector<int>&v)
    {
         low=0;
         high=numbers.size()-1;
        while(low<=high)
        {
           // int mid=low+(high-low)/2;
           // cout<<mid;
          //  cout<< numbers[low];
          //  cout<<numbers[high];
            if(numbers[low]+numbers[high]==target)
            {
                v.push_back(low+1);
                v.push_back(high+1);
                return;
            }
            else if(numbers[low]+numbers[high]<target)
            {
                low++;
            }
            else 
            {
                high--;
            }
        }
        return;
    }
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
         vector<int>v;
        twosum2(numbers,0,n-1,target,v);
        return v;
    }
};