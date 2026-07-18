class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int i = 0;
        int j = 0;
        int cnt = 0;
        int ans = 0 ;
        while (j < nums.size()) {
            if(nums[j] % 2 == 1) {
                k--;
                cnt = 0;
            }

            while (k == 0) {
                cnt++;
                if(nums[i] % 2 == 1) {
                    k++;
                }
                i++;
            }
            ans += cnt;
            j++;
        }
        return ans;
    }
};