class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        for(int i = 0 ; i < nums.size() ; i++) {
            int start = nums[i];
            string s = "";

            while(i + 1 < nums.size() && nums[i] + 1 == nums[i + 1]) {
                i++;
            }
            if(nums[i] == start) {
                s += to_string(start);
            }
            else{
                s += to_string(start);
                s += "->";
                s += to_string(nums[i]);
            }
            ans.push_back(s);
        }
        return ans;
    }
};