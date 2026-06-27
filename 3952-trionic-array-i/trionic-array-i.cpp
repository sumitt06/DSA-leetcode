class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        while(i < n - 1 && nums[i] < nums[i+1]) {
            i++;
        }
        int p = i;
        if(p == 0) {
            return false;
        }
        while(i < n - 1 && nums[i] > nums[i+1]) {
            i++;
        }
        int q = i;
        if(p == q) {
            return false;
        }
        while(i < n - 1 && nums[i] < nums[i+1]) {
            i++;
        }
        return i == n - 1 && q < n-1;
    }
};