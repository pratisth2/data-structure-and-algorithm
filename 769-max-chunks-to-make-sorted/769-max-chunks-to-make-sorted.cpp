class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
       
       
        int maxchunk=0;
        int count=0;
        for(int i=0;i<arr.size();i++)
        {
            maxchunk=max(maxchunk,arr[i]);
            if(i==maxchunk)
            {
                count++;
            }
        }
        return count;
    }
};