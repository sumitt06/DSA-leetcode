class Solution {
public:
    int twoEggDrop(int n) {
        // int i = 1;
        // int temp = n;
        // while(temp > 0) {
        //     temp -= i;
        //     i++;
        // }
        // return i - 1;
        int i;
        int sum = 0;
        for(i = 1 ; i <= n ; i++) {
            if(sum >= n) {
                break;
            }
            sum += i;
        }
        return i - 1;
    }
};