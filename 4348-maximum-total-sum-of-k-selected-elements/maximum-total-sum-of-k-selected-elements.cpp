class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin(), nums.end());
        long long sum = 0;
        int n = nums.size();
        for (int i = n - 1; i >= 0; i--) {
            if (k > 0) {
                if (mul > 0) {
                    long long product = (long long)nums[i] * mul;
                    sum += product;
                    mul--;
                } else {
                    sum += nums[i];
                }
                k--;
            }
            else{
                break;
            }
        }
        return sum;
    }
};