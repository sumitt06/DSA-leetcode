class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProduct = INT_MIN;
        int n = nums.size();
        for(int i = 0 ; i < n ; i ++) {
            int product = 1;
            for(int j = i ; j < n ; j++) {
                product *= nums[j];
                maxProduct = max(maxProduct , product);
            }
        }
        return maxProduct;
    }
};