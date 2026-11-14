class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int ans = INT_MAX;
        for(int i = 0 ; i < nums.size() ; i++) {
            int sum = 0;
            for(int j = i ; j < nums.size() && j - i + 1 <= r ; j++) {
                sum += nums[j];
                if(j - i + 1 >= l && j - i + 1 <= r) {
                    if(sum > 0) {
                        ans = min(ans , sum);
                    }
                }
            }
        }
        if(ans == INT_MAX) {
            return -1;
        }
        return ans;

        // int right = 0;
        // int left = 0;
        // int ans = INT_MAX;
        // int sum = 0;
        // while (right < nums.size()) {
        //     sum += nums[right];
        //     while (right - left + 1 > r) {
        //         sum -= nums[left];
        //         left++; 
        //     }
        //     if (right - left + 1 >= l && right - left + 1 <= r) {
        //         if (sum > 0) {
        //             ans = min(ans, sum);
        //         }
        //     }
        //     right++;
        // }
        // if (ans == INT_MAX) {
        //     return -1;
        // }
        // return ans;
    }
};