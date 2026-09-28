class Solution {
public:
    int maxDepth(string s) {
        int maxi = 0;
        stack<char> st;
        for(int i = 0 ; i < s.size() ; i++) {
            if(s[i] == '(') {
                st.push(s[i]);
            }
            int n = st.size();
            maxi = max(maxi , n);
            if(s[i] == ')') {
                st.pop();
            }
        }
        return maxi;
    }
};