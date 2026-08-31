class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int n = nums.size();
        int minimum = INT_MAX;
        int maximum = INT_MIN;
        for(int i = 0 ; i < n ; i++) {
            if(nums[i] < minimum) {
                minimum = nums[i];
            }
            if(nums[i] > maximum) {
                maximum = nums[i];
            }
        }
        if(maximum - minimum < (2 * k) + 1) {
            return 0;
        }
        int diff = maximum - minimum ;
        return diff - (2 * k);
    }
};