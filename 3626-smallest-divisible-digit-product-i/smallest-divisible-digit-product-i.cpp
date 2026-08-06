class Solution {
public:
    int smallestNumber(int n, int t) {
        int i;
        for (i = n; i <= 100; i++) {
            int product = 1;
            int j = i;
            while(j > 0) {
                product *= j % 10;
                j = j/10;
            }
            if(product % t == 0) {
                break;
            }

        }
        return i;
    }
};