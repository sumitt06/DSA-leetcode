class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int ind = 0;
        int n = chars.size();
        while (i < n) {
            char ch = chars[i];
            int cnt = 0;
            while (i < n && ch == chars[i]) {
                i++;
                cnt++;
            }
            chars[ind++] = ch;
            if (cnt > 1) {
                string s = to_string(cnt);
                for (int q : s) {
                    chars[ind++] = q;
                }
            }
        }
        return ind;
    }
};