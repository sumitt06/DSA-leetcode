class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt1 = 0;
        int cnt2 = 0;
        int candidate1 = 0;
        int candidate2 = 0;
        for(int i = 0 ; i < n ; i++) {
            if(candidate1 == nums[i]) {
                cnt1++;
            }
            else if(candidate2 == nums[i]) {
                     cnt2++;
            }
            else if(cnt1 == 0) {
                    candidate1 = nums[i];
                    cnt1++;
            }
            else if(cnt2 == 0) {
                     candidate2 = nums[i];
                     cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        int cnt3 = 0;
        int cnt4 = 0;
        for(int i = 0 ; i < n ; i++) {
            if(nums[i] == candidate1) {
                cnt3++;
            }
            else if(nums[i] == candidate2) {
                cnt4++;
            }
        }
         vector<int> ans;

        if(cnt3 > nums.size()/3)
            ans.push_back(candidate1);

        if(cnt4 > nums.size()/3)
            ans.push_back(candidate2);

        return ans;
    }
};