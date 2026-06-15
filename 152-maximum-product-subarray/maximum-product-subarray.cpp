class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // Brute approach
        int maxProduct = INT_MIN;
        int n = nums.size();
        for(int i = 0 ; i < n ; i ++) {
            int productOfSubarr = 1;
            for(int j = i ; j < n ; j++) {
                productOfSubarr *= nums[j];
                maxProduct = max(maxProduct , productOfSubarr);
            }
        }
        return maxProduct;
    }
};