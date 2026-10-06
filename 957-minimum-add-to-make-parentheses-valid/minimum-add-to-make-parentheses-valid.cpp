class Solution {
public:
    int minAddToMakeValid(string s) {
        // int open = 0 ; 
        // int close = 0 ;
        // for(int i = 0 ; i < s.size() ; i++) {
        //     if(s[i] == '(') {
        //         close++;
        //     }
        //     else{
        //         if(close > 0) {
        //             close--;
        //         }
        //         else{
        //             open++;
        //         }
        //     }
        // }
        // return close + open;

        stack<char> st;
        for(int i = 0 ; i < s.size() ; i++) {
            if(s[i] == '(') {
                st.push(s[i]);
            }
            else{
                if(!st.empty() && st.top() == '(') {
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
        }
        return st.size();
    }
};