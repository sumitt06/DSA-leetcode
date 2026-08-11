class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int , int> mpp;
        int xorr = 0;
        for(int i = 0 ; i < nums.size() ; i++) {
            mpp[nums[i]]++;
            if(mpp[nums[i]] == 2) {
                xorr = xorr ^ nums[i];
                mpp[nums[i]]--;
            }
        }
        return xorr;
    }
};