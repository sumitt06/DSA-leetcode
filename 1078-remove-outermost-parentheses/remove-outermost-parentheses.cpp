class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<int> st;
        string result;
        for(auto ch : s) {
            if(ch == '(') {
                if(!st.empty()) {
                    result += ch;
                }
                st.push(ch);
            }
            else{
                st.pop();
                if(!st.empty()) {
                    result += ch;
                }
            }
        }
        return result;
    }
};