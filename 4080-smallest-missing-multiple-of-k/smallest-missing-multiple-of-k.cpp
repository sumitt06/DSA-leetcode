class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        // vector<int> arr;
        // for(int i = 0 ; i < nums.size() ; i++) {
        //     if(nums[i] % k == 0) {
        //         arr.push_back(nums[i] / k);
        //     }
        // }
        // sort(arr.begin() , arr.end());
        // for(int i = 0 ; i < arr.size() ; i++) {
        //     if(arr[i] != i+1) {
        //         return (i + 1) * k;
        //     }
        // }
        // return(arr.size() + 1) * k;/

        unordered_set<int> st;
        for(int i = 0 ; i < nums.size() ; i++) {
            if(nums[i] % k == 0) {
                st.insert(nums[i] / k);
            }
        }
        int i = 1;
        while(st.find(i) != st.end()) {
            i++;
        }
        return i * k;
    }
};