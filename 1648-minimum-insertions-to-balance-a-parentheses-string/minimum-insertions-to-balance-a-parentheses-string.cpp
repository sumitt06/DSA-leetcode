class Solution {
public:
    int minInsertions(string s) {
        // int open = 0 ; 
        // int close = 0 ;
        // for(int i = 0 ; i < s.size() ; i++) {
        //     if(s[i] == '(') {
        //         close += 2;
        //     }
        //     else{
        //         if(close > 0) {
        //             close--;
        //         }
        //         else if(s[i] == ')' && s[i + 1] == ')'){
        //             open++;
        //             i++;
        //         }
        //         else if(s[i] == ')') {
        //             open++;
        //             close++;
        //         }
        //     }
        // }
        // return close + open;

        int open = 0;
        int close = 0;
        int ans = 0;

        for(int i = 0 ; i < s.size() ; i++) {
            if(s[i] == '(') {
                if(close % 2 == 1) {
                    close--;
                    ans++;
                }
                close += 2;
            }
            else{
                close--;

                if(close < 0) {
                    open++;
                    close = 1;
                }
            }
        }
        return close + open + ans;
    }
};