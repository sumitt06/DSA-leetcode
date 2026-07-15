class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        //   // this approach for consecutive indexes
        // int i = 0 ;
        // int j = 0 ;
        // long long sum = 0;
        // long long closestSum = INT_MAX;
        // while(j < nums.size()) {
        //     sum += nums[j];
        //     if(j - i + 1 < 3) {
        //         j++;
        //     }
        //     else if(j - i + 1 == 3) {
        //         if(abs(sum - target) < abs(closestSum - target)) {
        //             closestSum = sum;
        //         }
        //         sum -= nums[i];
        //         i++;
        //         j++;
        //     }
        // }
        // return closestSum;

        long long sum = 0;
        long long closestSum = INT_MAX;
        int n = nums.size();
        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 1; j < n - 1; j++) {
                for (int k = j + 1; k < n; k++) {
                    sum = nums[i] + nums[j] + nums[k];
                    if (abs(sum - target) < abs(closestSum - target)) {
                        closestSum = sum;
                    }
                }
            }
        }
        return closestSum;
    }
};