class Solution {
public:
    int xorOperation(int n, int start) {
        int i = 0;
        int xorr = 0;
        while(i < n) {
            int num = start + 2 * i;
            xorr ^= num;
            i++;
        }
        return xorr;
    }
};