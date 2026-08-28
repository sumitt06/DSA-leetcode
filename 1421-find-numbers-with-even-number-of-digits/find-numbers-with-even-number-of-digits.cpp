class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0 ;
        for(int i = 0 ; i < nums.size() ; i++) {
            int DigitCount = 0 ;
            while(nums[i] != 0) {
                DigitCount++ ;
                nums[i] = nums[i] / 10;
            }
            if(DigitCount % 2 == 0) {
                count++;
            }
        }
        return count;
    }
};