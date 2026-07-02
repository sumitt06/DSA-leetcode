class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> leftSum;
        vector<int> rightSum;
        vector<int> answer;
        int sum1 = 0;
        int totalSum = 0;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++) {
            leftSum.push_back(sum1);
            sum1 += nums[i];
            totalSum += nums[i];
        }
        for(int i = 0 ; i < n ; i++) {
            rightSum.push_back(totalSum - nums[i]);
            totalSum -= nums[i];
        }
        for(int i = 0 ; i < leftSum.size() ; i++) {
            answer.push_back(abs(leftSum[i] - rightSum[i]));
        }
        return answer;
    }
};