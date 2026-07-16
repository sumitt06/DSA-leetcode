class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int , int> mpp;
        for(int nums : arr) {
            mpp[nums]++;
        }
        set<int> st;
        for(auto it : mpp) {
            st.insert(it.second);
        }
        return st.size() == mpp.size();
    }
};