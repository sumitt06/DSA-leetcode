class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int mxi = 0;
        vector<int> prefixGcd;
        for(int i = 0 ; i < nums.size() ; i++) {
            mxi = max(mxi , nums[i]);
            prefixGcd.push_back(gcd(nums[i] , mxi));
        }
        sort(prefixGcd.begin() , prefixGcd.end());

        int left = 0 ;
        int right = prefixGcd.size() - 1;
        long long sum = 0;
        while(left < right) {
            sum += gcd(prefixGcd[left] , prefixGcd[right]);
            left++;
            right--;
        }
        return sum;
    }
};