class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // int n = nums.size();
        // if (n == 1) {
        //     if (nums[0] != 1)
        //         return 1;
        //     else
        //         return 2;
        // }
        // for (int i = 0; i < n - 1; i++) {

        //     if (nums[0] > 1) {
        //         return 1;
        //     }
        //     if (nums[i] >= 0 && nums[i + 1] != nums[i] + 1) {
        //         return nums[i] + 1;
        //     }
        // }
        // return 1;

        // int missingPositive = 1;
        // int n = nums.size();
        // // sort(nums.begin() , nums.end());
        // for(int i = 0 ; i < n ; i++) {
        //     if(nums[i] < missingPositive) {
        //         continue;
        //     }
        //     if(nums[i] == missingPositive) {
        //         missingPositive++;
        //     }
        //     else if(nums[i] > missingPositive) {
        //         continue;
        //     }
        // }
        // return missingPositive;

        int n = nums.size();
        for(int i = 0 ; i < n ; i++) {
            while(nums[i] >= 1 &&
                   nums[i] <= n &&
                   nums[i] != nums[nums[i] - 1]) {
                swap(nums[i], nums[nums[i] - 1]);
            }
        }
        for(int i = 0 ; i < n ; i++) {
            if(nums[i] != i+1) {
                return i+1;
            }
        }
        return n+1;
    }
};