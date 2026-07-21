class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1) {
            return 0;
        }
        int i = 0;
        int j = 0;
        long long product = 1;
        int cnt = 0;
        while (j < nums.size()) {
            product *= nums[j];
            if (product >= k) {
                while (product >= k) {
                    product /= nums[i];
                    i++;
                }
            }
            cnt += j - i + 1;
            j++;
        }
        return cnt;
    }
};