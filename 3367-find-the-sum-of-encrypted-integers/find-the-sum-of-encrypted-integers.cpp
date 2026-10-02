class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0 ;
        for(int i = 0 ; i < nums.size() ; i++) {
            int cnt = 0;
            int maxi = 0;
            while(nums[i] > 0) {
                maxi = max(nums[i] % 10 , maxi);
                nums[i] = nums[i] / 10;
                cnt++;
            }
            int encrypted = 0;
            while(cnt > 0) {
                encrypted *= 10;
                encrypted += maxi;
                cnt--;
            }
            sum += encrypted;
        }
        return sum;
    }
};