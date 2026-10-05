class Solution {
public:
    int scoreOfParentheses(string s) {
        // int score = 0;
        // int open = 0;
        // for(int i = 0 ; i < s.size() ; i++) {
        //     if(s[i] == '(') {
        //         open++;
        //     }
        //     else{
        //         if(open > 0) {
        //             score++;
        //             open--;
        //         }
        //     }
        // }
        // return score;

        // int score = 0;
        // stack<char> st;
        // for(int i = 0 ; i < s.size() ; i++) {
        //     if(s[i] == '(') {
        //         st.push(s[i]);
        //     }
        //     else{
        //         st.pop();
        //         score++;
        //     }
        // }
        // return score;

        stack<int> st;
        st.push(0);
        for(int i = 0 ; i < s.size() ; i++) {
            if(s[i] == '('){
                st.push(0);
            }
            else{
                int x = st.top();
                st.pop();

                if(x == 0) {
                    x = 1;
                }
                else{
                    x = 2 * x;
                }
                st.top() += x;
            }
        }
        return st.top();
    }
};