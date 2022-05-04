class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        unordered_set<int>uni;
        for(auto i=m.begin(); i!=m.end();i++)
        {
            if(uni.count(i->second))
                return false;
            else
                uni.insert(i->second);
        }
        return true;
    }
};