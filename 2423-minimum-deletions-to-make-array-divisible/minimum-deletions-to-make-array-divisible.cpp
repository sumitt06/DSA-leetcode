class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        //   // it give Time Limit Exceeded
        // sort(nums.begin() , nums.end());
        // int n = nums.size();
        // int d = numsDivide.size();
        // int cnt = 0;
        // for(int i = 0 ; i < n ; i++) {
        //     int divideCnt = 0;
        //     for(int j = 0 ; j < d ; j++) {
        //         if(numsDivide[j] % nums[i] != 0) {
        //             cnt++;
        //             break;
        //         }
        //         else{
        //             divideCnt++;
        //         }
        //     }
        //     if(divideCnt == d) {
        //         return cnt;
        //     }
        // }
        // return -1;


        int n = nums.size();
        int d = numsDivide.size();
        int g = numsDivide[0];
        for(int i = 1 ; i < d ; i++) {
            g = gcd(g , numsDivide[i]);
        }
        sort(nums.begin() , nums.end());
        for(int i = 0 ; i < n ; i++) {
            if(g % nums[i] == 0) {
                return i;
            }
        }
        return -1;
    }
};