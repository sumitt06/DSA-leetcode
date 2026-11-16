class Solution {
public:
    string digitSum(string s, int k) {
        while(s.size() > k) {
            string ans = "";
            for(int i = 0 ; i < s.size() ; i += k) {
                int grpSum = 0;
                for(int j = i ; j < i + k && j < s.size() ; j++) {
                    grpSum += s[j] - '0';
                }
                ans += to_string(grpSum);
            }
            s = ans;
        }
        return s;
    }
};