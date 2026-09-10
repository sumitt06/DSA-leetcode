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
        prefixProduct.push_back(1);
        suffixProduct.push_back(1);
        for(int i = 1 ; i < n ; i++) {
            prefix *= nums[i - 1];
            prefixProduct.push_back(prefix);
        }
        for(int i = n - 2 ; i >= 0 ; i--) {
            suffix *= nums[i + 1];
            suffixProduct.push_back(suffix);
        } 
        vector<int> answer;
        int n2 = prefixProduct.size();
        for(int i = 0 ; i < n2 ; i++) {
            answer.push_back(prefixProduct[i] * suffixProduct[n2 - i - 1]);
        }
        return answer;
    }
};