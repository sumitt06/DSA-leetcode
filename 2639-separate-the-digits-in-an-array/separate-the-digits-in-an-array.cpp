class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        // vector<int> ans;
        // for(int i = nums.size() - 1 ; i >= 0  ; i--) {
        //     while(nums[i] > 0) {
        //         ans.push_back(nums[i] % 10);
        //         nums[i] = nums[i] / 10;
        //     }
        // }
        // reverse(ans.begin() , ans.end());
        // return ans;

        // vector<int> ans;
        // for(int i = 0; i < nums.size() ; i++) {
        //     int start = ans.size();
        //     while(nums[i] > 0) {
        //         ans.push_back(nums[i] % 10);
        //         nums[i] = nums[i] / 10;
        //     }
        //     reverse(ans.begin() + start , ans.end());
        // }
        // return ans;

        vector<int> ans;
        stack<int> st;
        for(int i = 0; i < nums.size() ; i++) {
            while(nums[i] > 0) {
                st.push(nums[i] % 10);
                nums[i] = nums[i] / 10;
            }
            while(!st.empty()) {
                ans.push_back(st.top());
                st.pop();
            }
        }
        return ans;
    } 
};