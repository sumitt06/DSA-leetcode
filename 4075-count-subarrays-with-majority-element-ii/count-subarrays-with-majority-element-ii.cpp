class Solution {
public:
    long long countMajoritySubarrays(vector<int>& nums, int target) {
        map<int,int> mpp; //prefix sum : count
        int prefixSum = 0;
        mpp[0] = 1;
        int validLeftPoint = 0;
        long long result = 0;
        for(int i = 0 ; i < nums.size() ; i++) {
            if(nums[i] == target) {
                validLeftPoint += mpp[prefixSum];
                prefixSum++;
            }
            else{
                prefixSum--;
                validLeftPoint -= mpp[prefixSum];
                
            }
            mpp[prefixSum]++;
            result += validLeftPoint;
        }
        return result;
    }
};