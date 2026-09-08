class Solution {
public:
    int countCommas(int n) {
        // int cnt = 0;
        // for(int i = 1000 ; i <= n ; i++) {
        //     cnt++;
        // }
        // return cnt;
        if(n > 999) {
            return n - 999;
        }
        return 0;
    }
};