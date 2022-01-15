class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l=0;
        int r=letters.size()-1;
       // int ans=-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(target<letters[mid])
            {
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return letters[l%letters.size()];
        
    }
};