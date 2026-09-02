class Solution {
public:
    int mySqrt(int x) {
        long long i = 1 ; 
        long long j = x ;
        while(i <= j) {
            long long mid = (i + j) / 2 ;
            long long multi = mid * mid ;
            if(multi == x) {
                return mid ;
            }
            else if(multi < x) {
                i = mid + 1 ;
            }
            else{
                j = mid - 1;
            }
        }
        return j;
    }
};