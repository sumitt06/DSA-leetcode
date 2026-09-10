class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // int n = nums.size();
        // vector<int> answer;
        // int preProduct = 1;
        // int i;
        // for(i = 0 ; i < n - 1 ; i++) {
        //     if(i > 0) {
        //         preProduct *= nums[i - 1];
        //     }
        //     int product = 1;
        //     for(int j = i + 1 ; j < n ; j++) {
        //         product *= nums[j];
        //     }
        //     answer.push_back(preProduct * product);
        // }
        // answer.push_back(preProduct * nums[i - 1]);
        // return answer;

        int n = nums.size();
        int prefix = 1 ;
        int suffix = 1 ;
        vector<int> prefixProduct ;
        vector<int> suffixProduct ;
        for(int i = 0 ; i < n ; i++) {
            prefixProduct.push_back(prefix);
            prefix *= nums[i];
            suffixProduct.push_back(suffix);
            suffix *= nums[n - i - 1];
        }
        vector<int> answer;
        int n2 = prefixProduct.size();
        for(int i = 0 ; i < n2 ; i++) {
            answer.push_back(prefixProduct[i] * suffixProduct[n2 - i - 1]);
        }
        return answer;
    }
};