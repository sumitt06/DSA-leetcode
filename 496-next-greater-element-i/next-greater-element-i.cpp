class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st ;
        map<int,int> mpp;
        vector<int> ans;
        int n2 = nums2.size();
        int n1 = nums1.size();
        for(int i = n2-1 ; i >= 0 ; i--) {
            while(!st.empty() && st.top() < nums2[i]) {
                st.pop();
            }
            if(st.empty()) {
                mpp[nums2[i]] = -1;
            }
            else{
                mpp[nums2[i]] = st.top();
            }
            st.push(nums2[i]);
        }
        for(int j = 0 ; j < n1 ; j++) {
            ans.push_back(mpp[nums1[j]]);
        }
        return ans;
    }
};