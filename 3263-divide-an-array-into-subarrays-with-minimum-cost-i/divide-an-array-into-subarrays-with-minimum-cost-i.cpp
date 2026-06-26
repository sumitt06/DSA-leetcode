class Solution {
public:
    int minimumCost(vector<int>& nums) {
        // int n = nums.size();
        // int ans = INT_MAX;
        // for (int i = 1; i < n; i++) {
        //     for (int j = i + 1; j < n; j++) {
        //         ans = min(ans, nums[0] + nums[i] + nums[j]);
        //     }
        // }
        // return ans;

        int n = nums.size();
        int first = INT_MAX;
        int second = INT_MAX;

        for(int i = 1 ; i < n ; i++) {
            if(first > nums[i]) {
                second = first;
                first = nums[i];
            }
            else if(nums[i] < second) {
                second = nums[i];
            }
        }
        return nums[0] + first + second;
    }
};