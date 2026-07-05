class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n = moves.size();
        int cnt1 = 0;
        int cnt2 = 0;
        for(int i = 0 ; i < n ; i++) {
            if(moves[i] == 'L') {
                cnt1--;
            }
            else if(moves[i] == 'R') {
                cnt1++;
            }
            else{
                cnt1++;
            }
        }
        for(int i = 0 ; i < n ; i++) {
            if(moves[i] == 'L') {
                cnt2--;
            }
            else if(moves[i] == 'R') {
                cnt2++;
            }
            else{
                cnt2--;
            }
        }
        int ans = max(abs(cnt1) , abs(cnt2));
        return ans;
    }
};