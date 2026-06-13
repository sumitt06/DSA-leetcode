class Solution {
public:
    long long beautifulSubarrays(vector<int>& nums) {
        // int n = nums.size();
        // int cnt = 0;
        // for(int i = 0 ; i < n ; i++) {
        //     int xorr = 0;
        //     for(int j = i ; j < n ; j++) {
        //         xorr ^= nums[j];
        //         if(xorr == 0) {
        //             cnt++;
        //         }
        //     }
        // }
        // return cnt;

        int n = nums.size();
        int xorr = 0;
        map<int , int> mpp;
        mpp[xorr]++;
        long long cnt = 0;
        for(int i = 0 ; i < n ; i++) {
            xorr ^= nums[i];
            long long x = xorr^0;
            cnt += mpp[x];
            mpp[xorr]++;
        }
        return cnt;
    }
};