class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int i = 0;
        int j = 0;
        int cnt = 0;
        string ans = "";
        while (j < s.size()) {
            if (s[j] == '1'){
                cnt++;
            }
            while (cnt > k) {
                if (s[i] == '1'){
                    cnt--;
                }
                i++;
            }
            if (cnt == k) {
                while (s[i] == '0') {
                    i++;
                }
                string temp = s.substr(i, j - i + 1);
                if (ans == "" || temp.size() < ans.size()) {
                    ans = temp;
                }
                else if (temp.size() == ans.size() && temp < ans) {
                    ans = temp;
                }
            }
            j++;
        }
        return ans;
    }
};