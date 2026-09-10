class Solution {
public:
    void solve(vector<int>& nums , vector<vector<int>> &ans , vector<int>path , int i) {
        if(i == nums.size()) {
            ans.push_back(path);
            return;
        }
        path.push_back(nums[i]);
        solve(nums , ans , path , i + 1);
        path.pop_back();
        while(i + 1 < nums.size() && nums[i] == nums[i + 1]) {
            i += 1;
        }
        solve(nums , ans , path , i + 1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        vector<vector<int>> ans;
        vector<int> path;
        solve(nums, ans, path, 0);
        return ans;
    }
};