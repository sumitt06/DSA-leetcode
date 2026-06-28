class Solution {
public:
    bool checkOnesSegment(string s) {
        int n = s.size();
        int cnt = 0;
        int segment = 0;
        for(int i = 0 ; i < n ; i++) {
            if(s[i] == '1') {
                segment = 1 ;
            }
            else{
                cnt += segment;
                segment = 0;
            }
        }
        if(s[n-1] == '1') {
            cnt++;
        }
        if(cnt == 1) {
            return true;
        }   
        return false; 
    }
};