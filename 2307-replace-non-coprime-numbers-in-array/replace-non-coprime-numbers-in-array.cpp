class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        // stack<int> st;
        // int j;
        // int n = nums.size();
        // for(int i = 0 ; i < n - 1; i++) {
        //     j = i+1;
        //     if(st.empty()) {
        //         if(gcd(nums[i] , nums[j]) > 1) {
        //             st.push(lcm(nums[i] , nums[j]));
        //         }
        //         else{
        //             st.push(nums[i]);
        //             st.push(nums[j]);
        //         }
        //     }
        //     break;
        // }
        // long long ans;
        // for(int i = j + 1 ; i < n ; i++) {
        //     if(gcd(st.top() , nums[i]) > 1) {
        //         ans = lcm(st.top() , nums[i]);
        //         st.pop();
        //         st.push(ans);
        //     }
        //     else{
        //         st.push(nums[i]);
        //     }
        // }
        // vector<int> result;
        // while(!st.empty()) {
        //     result.push_back(st.top());
        //     st.pop();
        // } 
        //  reverse(result.begin() , result.end());
        //  return result;


        stack<int> st;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            long long curr = nums[i];
            while (!st.empty() && gcd(st.top(), curr) > 1) {
                curr = lcm(st.top(), curr);
                st.pop();
            }

            st.push(curr);
        }
        vector<int> result;
        while (!st.empty()) {
            result.push_back(st.top());
            st.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};