class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int target = 0 ;
        int i = 0 ;
        int j = n - 1 ;
        int lower = n;
        int upper = n;
        while(i <= j) {
            int mid = (i + j) / 2;
            if(nums[mid] >= target) {
                lower = mid;
                j = mid - 1;
            }
            else{
                i = mid + 1;
            }
        }
        i = 0 , j = n - 1 ;
        while(i <= j) {
            int mid = (i + j) / 2;
            if(nums[mid] > target) {
                upper = mid;
                j = mid - 1;
            }
            else{
                i = mid + 1;
            }
        }
        int pos = n - upper;
        return max(pos , lower);
    }
};