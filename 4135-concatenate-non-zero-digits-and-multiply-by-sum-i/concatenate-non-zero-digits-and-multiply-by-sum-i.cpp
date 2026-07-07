class Solution {
public:
    long long sumAndMultiply(int n) {
        int i = 1;
        long long sum = 0;
        long long x = 0;
        while(n != 0) {
            if(n%10 != 0) {
               x = x + (n%10 * i);
               i *= 10;
            }
            sum += n%10;
            n = n/10;
        }
        return x * sum;
    }
};