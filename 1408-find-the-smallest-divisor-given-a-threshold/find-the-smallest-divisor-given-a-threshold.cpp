class Solution {
public:
    bool can(vector<int>& nums, int mid , int threshold) {
        long long used_threshold = 0;
        for(int x = 0 ; x < nums.size() ; x++) {
            used_threshold += (nums[x] + mid - 1) / mid ;
        }
        return used_threshold <= threshold;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int i = 1;
        int j = *max_element(nums.begin() , nums.end());
        while(i < j) {
            int mid = (i + j) / 2 ;
            if (can(nums , mid , threshold)) {
                j = mid ;
            }
            else {
                i = mid + 1;
            }
        }
        return i;
    }
};