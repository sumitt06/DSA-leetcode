class Solution {
public:
    bool isGood(vector<int>& nums) {
        int maxi = INT_MIN;
        for(int i = 0 ; i < nums.size() ; i++) {
            if(nums[i] > maxi) {
                maxi = nums[i];
            }
        }
        if(maxi + 1 != nums.size()) {
            return false;
        }
        map<int,int> mpp;
        for(int i = 0 ; i < nums.size() ; i++) {
            mpp[nums[i]]++;
        }
        for(int i = 1 ; i < maxi ; i++) {
            if(mpp[i] != 1) {
                return false;
            }
        }
        return mpp[maxi] == 2;
    }
};