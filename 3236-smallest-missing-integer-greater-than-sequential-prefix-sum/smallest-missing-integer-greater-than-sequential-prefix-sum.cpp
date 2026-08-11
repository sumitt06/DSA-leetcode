class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = nums[0];
        int n = nums.size();
        int j = 0;
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1] + 1) {
                sum += nums[i];
            }
            else {
                j = i;
                break;
            }
        }
        unordered_set<int> st;
        st.insert(nums[0]);
        for(int i = j ; i < n ; i++) {
            st.insert(nums[i]);
        }
        while(st.find(sum) != st.end()) {
            sum++;
        }
        return sum;
    }
};