class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int xorr = 0;
        for(int i = 0 ; i < nums.size() ; i++) {
            for(int j = i ; j < nums.size() ; j++) {
                if(abs(nums[i] - nums[j]) <= min(nums[i] , nums[j])) {
                    int xr = nums[i] ^ nums[j];
                    xorr = max(xr , xorr);
                }
            }
        }
        return xorr;
    }
};