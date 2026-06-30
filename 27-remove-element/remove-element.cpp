class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
            //not in "in-place"
        // int n = nums.size();
        // vector<int> ans;
        // for(int i = 0 ; i < n ; i++) {
        //     if(nums[i] != val) {
        //         ans.push_back(nums[i]);
        //     }
        // }
        // nums = ans;
        // return nums.size();
        int n = nums.size();
        int k = 0;
        
        for(int i = 0 ; i < n ; i++) {
            if(nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};