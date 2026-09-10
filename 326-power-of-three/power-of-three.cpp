class Solution {
public:
    bool solve(int n) {
        if(n <= 0) {
            return false;
        }
        if(n == 1) {
            return true;
        }
        if(n % 3 != 0) {
            return false;
        }
        return solve(n / 3);
    }
    bool isPowerOfThree(int n) {
        // long long x = 1;
        // while(x <= n) {
        //     if(x == n) {
        //         return true;
        //     }
        //     x *= 3;
        // }
        // return false;
        // if (n <= 0)
        //     return false;

        // while (n % 3 == 0) {
        //     n /= 3;
        // }
        // return n == 1;
        return solve(n);
    }
};