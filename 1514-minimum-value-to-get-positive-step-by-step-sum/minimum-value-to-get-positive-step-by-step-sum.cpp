class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int valid = 1;
        int k = 1;
        while(valid) {
            int startValue = k;
            for(int i = 0 ; i < nums.size() ; i++) {
                startValue += nums[i];
                if(startValue < 1) {
                    k++;
                    break;
                }
            }
            if(startValue >= 1) {
                valid = 0;
            }
        }
        return k;
    }
};