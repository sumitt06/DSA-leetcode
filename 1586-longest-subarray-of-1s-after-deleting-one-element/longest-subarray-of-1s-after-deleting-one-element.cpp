class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i = 0;
        int j = 0;
        int maxi = INT_MIN;
        int cnt = 0;
        while (j < nums.size()) {
            if (nums[j] == 0) {
                cnt++;
            }
            if (cnt > 1) {
                while (cnt > 1) {
                    if (nums[i] == 0) {
                        cnt--;
                    }
                    i++;
                }
            }
            maxi = max(maxi, j - i);
            j++;
        }
        return maxi;
    }
};