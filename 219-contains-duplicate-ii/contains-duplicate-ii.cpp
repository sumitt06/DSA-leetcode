class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> st;
        int i = 0;
        while (i < nums.size()) {
            if (st.find(nums[i]) != st.end()) {
                return true ;  //menas exist or contain duplicate
            }
            st.insert(nums[i]);
            if (st.size() > k) {
                st.erase(nums[i - k]);
            }
            i++;
        }
        return false;
    }
};