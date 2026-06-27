class Solution {
public:
    int maximumLength(vector<int>& nums) {
        map<long long , int> mpp;
        int ans = 1 ;
    
        for(int i = 0 ; i < nums.size() ; i++) {
            mpp[nums[i]]++;
        }

        if(mpp.find(1) != mpp.end()) {
            if(mpp[1] % 2 == 0) {
                ans = mpp[1] - 1 ;
            }
            else{
                ans = mpp[1] ;
            }
        }

        for(auto it : mpp) {
            long long x = it.first;
            int length = 0;

            if(x == 1) {
                continue;
            }

            while(mpp.find(x) != mpp.end() && mpp[x] > 1) {
                length += 2;
                x = x * x ;
            }

            if(mpp.find(x) != mpp.end() && mpp[x] == 1) {
                length += 1;
            }
            else{
                length -= 1;
            }
            ans = max(ans , length);
        }
        return ans;
    }
};