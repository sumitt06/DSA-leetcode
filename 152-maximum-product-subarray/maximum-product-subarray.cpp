class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // Brute approach

        // int maxProduct = INT_MIN;
        // int n = nums.size();
        // for(int i = 0 ; i < n ; i ++) {
        //     int productOfSubarr = 1;
        //     for(int j = i ; j < n ; j++) {
        //         productOfSubarr *= nums[j];
        //         maxProduct = max(maxProduct , productOfSubarr);
        //     }
        // }
        // return maxProduct;

        //optimal
        // by using concept of kedane's algo but there is problem , if in the array there is any element (like 0 and with -ve value) before the max product it give me wrong answer
        // int n = nums.size();
        // int maxProduct = INT_MIN;
        // int productOfSubarr = 1;
        // for(int i = 0 ; i < n ; i++) {
        //     productOfSubarr *= nums[i];
        //     if(productOfSubarr > maxProduct) {
        //         maxProduct = productOfSubarr;
        //     }
        //     if(productOfSubarr == 0) {
        //         productOfSubarr = 1;
        //     }
        // }
        // return maxProduct;

        // optimal by using prefix and suffix
        int n = nums.size();
        int prefix = 1 ; 
        int suffix = 1 ;
        int maxProduct = INT_MIN;
        for(int i = 0 ; i < n ; i++) {
            if(prefix == 0) {
                prefix = 1;
            }
            if(suffix == 0) {
                suffix = 1;
            }
            prefix *= nums[i];
            suffix *= nums[n-1-i];
            maxProduct = max(maxProduct , max(suffix , prefix));
        }
        return maxProduct;
    }
};