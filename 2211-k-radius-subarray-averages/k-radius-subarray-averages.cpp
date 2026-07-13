class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int len = 2 * k + 1;
        int n = nums.size();
        vector<int> ans(n , -1);
        if(len > n) {
            return ans;
        }
        long long sumOfWindow = 0;
        for(int i = 0 ; i < len ; i++) {
            sumOfWindow += nums[i];
        }
        ans[k] = sumOfWindow / len;

        int left = 0 ;
        for(int right = len ; right < n ; right++) {
            sumOfWindow += nums[right];
            sumOfWindow -= nums[left];
            left++;
            ans[left + k] = sumOfWindow / len;
        }
        return ans;
    }
};