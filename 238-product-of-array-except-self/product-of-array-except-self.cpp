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
        
        vector<int> prefixProduct(n) ;
        vector<int> suffixProduct(n) ;
        vector<int> answer(n) ;

        int prefix = 1 ;
        int suffix = 1 ;
        for(int i = 0 ; i < n ; i++) {
            prefixProduct[i] = prefix;
            prefix *= nums[i];
        }
        for(int i = n - 1 ; i >= 0 ; i--) {
            suffixProduct[i] = suffix;
            suffix *= nums[i];
        }
        
        for(int i = 0 ; i < n ; i++) {
            answer[i] = prefixProduct[i] * suffixProduct[i];
        }
        return answer;
    }
};