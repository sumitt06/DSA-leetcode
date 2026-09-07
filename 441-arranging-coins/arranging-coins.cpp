class Solution {
public:
    int arrangeCoins(int n) {
        int cnt = 0;
        int i = 1;
        while(n > 0) {
            n = n - i;
            cnt++;
            i++;
        }
        if(n == 0) {
            return cnt;
        }
        return cnt - 1;
    }
};