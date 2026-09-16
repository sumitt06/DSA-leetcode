class Solution {
public:
    int maxScore(string s) {
        int j = 1;
        int maxi = 0;
        while(j < s.size()) {
            int cnt0 = 0;
            int cnt1 = 0;
            for(int i = 0 ; i < j ; i++) {
                if(s[i] == '0') {
                    cnt0++;
                }
            }
            for(int i = j ; i < s.size() ; i++) {
                if(s[i] == '1') {
                    cnt1++;
                }
            }
            maxi = max(maxi , cnt0 + cnt1);
            j++;
        }
        return maxi;
    }
};