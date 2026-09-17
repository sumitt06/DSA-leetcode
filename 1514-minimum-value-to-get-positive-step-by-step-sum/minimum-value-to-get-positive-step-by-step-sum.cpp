class Solution {
public:
    int minStartValue(vector<int>& nums) {
        // int valid = 1;
        // int k = 1;
        // while(valid) {
        //     int startValue = k;
        //     for(int i = 0 ; i < nums.size() ; i++) {
        //         startValue += nums[i];
        //         if(startValue < 1) {
        //             k++;
        //             break;
        //         }
        //     }
        //     if(startValue >= 1) {
        //         valid = 0;
        //     }
        // }
        // return k;

        int mini = 0;
        int sum = 0;
        for(int i = 0 ; i < nums.size() ; i++) {
            sum += nums[i];
            if(sum < mini) {
                mini = sum;
            }
        }
        return 1 - mini;
    }
};