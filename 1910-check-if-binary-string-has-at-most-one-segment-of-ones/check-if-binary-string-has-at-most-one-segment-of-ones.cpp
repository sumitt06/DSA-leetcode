class Solution {
public:
    bool checkOnesSegment(string s) {
        // int n = s.size();
        // int cnt = 0;
        // int segment = 0;
        // for(int i = 0 ; i < n ; i++) {
        //     if(s[i] == '1') {
        //         segment = 1 ;
        //     }
        //     else{
        //         cnt += segment;
        //         segment = 0;
        //     }
        // }
        // if(s[n-1] == '1') {
        //     cnt++;
        // }
        // if(cnt == 1) {
        //     return true;
        // }
        // return false; /

        bool seenZero = false;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0') {
                seenZero = true;
            } else if (seenZero == true) {
                return false;
            }
        }
        return true;
    }
};