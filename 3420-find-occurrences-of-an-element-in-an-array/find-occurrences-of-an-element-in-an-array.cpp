class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int> occurence;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++) {
            if(nums[i] == x) {
                occurence.push_back(i);
            }
        }
        vector<int> ans;
        for(int i = 0 ; i < queries.size() ; i++) {
            if(queries[i] <= occurence.size()) {
                ans.push_back(occurence[queries[i] - 1]);
            }
            else{
                ans.push_back(-1);
            }
        }
        return ans;
    }
};