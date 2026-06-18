class Solution {
public:
    bool isValid(string s) {
        // int n = s.size();
        // for (int i = 0; i < n; i++) {
        //     if (s[i] == '(' && s[i + 1] != ')' ||
        //         s[i] == '{' && s[i + 1] != '}' ||
        //         s[i] == '[' && s[i + 1] != ']') {
        //         return false;
        //     }
        // }
        // return true;

        int n = s.size();
        map<char , char> mpp {
            {')' , '('},
            {']' , '['},
            {'}' , '{'}
        };
        stack<char> st;
        for(int i = 0 ; i < n ; i++) {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            }
            else if(!st.empty() && mpp[s[i]] == st.top()) {
                st.pop();
            }
            else{
                return false;
            }
        }
        return st.empty();
    }
};