class Solution {
public:

    bool solve(int n) {
        if(n <= 0) {
            return false;
        }
        if(n == 1) {
            return true;
        }
        if(n % 2 != 0) {
            return false;
        }
        return solve(n / 2);
    }
    bool isPowerOfTwo(int n) {
        //  if (n <= 0) return false;

        // while (n % 2 == 0) {
        //     n /= 2;
        // }
        // return n == 1;
        // return n > 0 && 1073741824 % n == 0;

        return solve(n);
    }
};