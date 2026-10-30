class Solution {
public:
    int countElements(vector<int>& nums) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            maxi = max(maxi , nums[i]);
            mini = min(mini , nums[i]);
            
        }
        int cnt = 0;
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] > mini && nums[j] < maxi) {
                cnt++;
            }
        }
        return cnt;
    }
};