class Solution {
public:
    int arraySign(vector<int>& nums) {
        // long long product = 1;
        // for(int i = 0 ; i < nums.size() ; i++) {
        //     product *= nums[i];
        // }
        // if(product < 0) {
        //     return -1;
        // }
        // else if(product > 0) {
        //     return 1;
        // }
        // return 0;

        int product = 1;
        for(int i = 0 ; i < nums.size() ; i++) {
            if(nums[i] == 0) {
                return 0;
            }
            if(nums[i] < 0) {
                product *= -1;
            }
        }
        return product;
    }
};