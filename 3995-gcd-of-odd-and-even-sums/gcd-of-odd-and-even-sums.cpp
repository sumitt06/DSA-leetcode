class Solution {
public:
    int gcdOfOddEvenSums(int n) {
       int odd = 1, even = 2;
        int sumOdd = 0, sumEven = 0;
        for (int i = 0; i < n; i++) {
            sumOdd += odd;
            sumEven += even;
            odd += 2;
            even += 2;
        }
        return gcd(sumOdd , sumEven);
    }
};