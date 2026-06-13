class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int maxi = 0;
        for(int i = 1 ; i < n ; i++) {
            if(nums[maxi] < nums[i]) {
                maxi = i;
            }
        }
        return maxi;  
    }
};