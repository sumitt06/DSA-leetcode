class Solution {
public:
    int minOperations(string s) {
        // int n = s.size();
        // int i = 0 ;
        // int j = n - 1;
        // int cnt = 0;
        // while(i < j) {
        //     if(s[i] == s[j]) {
        //         cnt++;
        //     }
        //     i++;
        //     j--;
        // }
        // return cnt;

        int n = s.size();
        int cnt1 = 0;
        int cnt2 = 0;

        //check for 01010101.....
        for(int i = 0 ; i < n ; i++) {
            
            if(i % 2 == 0 && s[i] != '0') {
                cnt1++;
            }
            else if(i % 2 == 1 && s[i] != '1'){
                cnt1++;
            }
        }

        //check for 1010101010.....
        for(int i = 0 ; i < n ; i++) {
            if(i % 2 == 0 && s[i] != '1') {
                cnt2++;
            }
            else if(i % 2 == 1 && s[i] != '0') {
                cnt2++;
            }
        }
        return min(cnt1 , cnt2);
    }
};