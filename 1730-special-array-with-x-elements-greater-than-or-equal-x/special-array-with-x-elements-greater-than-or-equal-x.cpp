class Solution {
public:
    int specialArray(vector<int>& nums) {
        int low = 0;
        int high = nums.size();
        while(low <= high) {
            int mid = (low + high)/2;
            int cnt = 0;
            for(int i = 0 ; i < nums.size() ; i++) {
                if(nums[i] >= mid) {
                    cnt++;
                }
            }
            if(cnt == mid) {
                return cnt;
            }
            else if(cnt > mid) {
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return -1;
    }
};