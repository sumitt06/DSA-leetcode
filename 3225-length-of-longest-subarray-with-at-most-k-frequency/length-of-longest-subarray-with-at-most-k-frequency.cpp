class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int i = 0;
        int j = 0;
        int maxi = 0;
        unordered_map<int , int> mpp;
        while (j < nums.size()) {
            mpp[nums[j]]++;
            if (mpp[nums[j]] > k) {
                while (mpp[nums[j]] > k) {
                    mpp[nums[i]]--;
                    if(mpp[nums[i]] == 0) {
                        mpp.erase(nums[i]);
                    }
                    i++;
                }
            }
            if(mpp[nums[j]] <= k) {
                maxi = max(maxi , j - i + 1);
            }
            j++;
        }
        return maxi;
    }
};