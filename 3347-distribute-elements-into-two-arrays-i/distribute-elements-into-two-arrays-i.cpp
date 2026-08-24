class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;
        int n = nums.size();
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        for(int i = 2 ; i < n ; i++) {
            int n1 = arr1.size();
            int n2 = arr2.size();
            if(arr1[n1-1] > arr2[n2-1]) {
                arr1.push_back(nums[i]);
            }
            else{
                arr2.push_back(nums[i]);
            }
        }
        // vector<int> result;
        // for(int i = 0 ; i < arr1.size() ; i++) {
        //     result.push_back(arr1[i]);
        // }
        // for(int i = 0 ; i < arr2.size() ; i++) {
        //     result.push_back(arr2[i]);
        // }
        // return result;
        for(int i = 0 ; i < arr2.size() ; i++) {
            arr1.push_back(arr2[i]);
        }
        return arr1;
    }
};