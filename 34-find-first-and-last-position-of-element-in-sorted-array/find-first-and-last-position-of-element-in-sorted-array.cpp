class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int first = -1;
        int last = -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] == target) {
                // if (nums[mid - 1] == target) {
                //     return {mid - 1, mid};
                // } else {
                //     return {mid, mid + 1};
                // }
                first = mid;
                high = mid - 1;
            } else if (target < nums[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        int l = 0;
        int h = n - 1;
        while (l <= h) {
            int mid = (l + h) / 2;
            if (nums[mid] == target) {
                last = mid;
                l = mid + 1;
            } else if (target < nums[mid]) {
                h = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return {first, last};
    }
};