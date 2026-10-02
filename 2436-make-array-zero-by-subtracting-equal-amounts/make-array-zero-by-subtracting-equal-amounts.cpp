class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int cnt = 0;
        for(int i = 0 ; i < nums.size() ; i++) {
            if(nums[i] > 0) {
                int temp = nums[i];
                for(int j = 0 ; j < nums.size() ; j++) {
                    if(nums[j] > 0) {
                        nums[j] -= temp;
                    }
                }
                cnt++;
            }
        }
        return cnt;
    }
};