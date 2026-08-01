class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n == 1) {
            return strs[0];
        }
        int minLen = INT_MAX;
        for (int i = 0; i < n; i++) {
            int cnt = 0;
            for (int j = 0; j < strs[i].size(); j++) {
                cnt++;
            }
            minLen = min(minLen, cnt);
        }
        string ans = "";
        for (int i = 0; i < minLen; i++) {
            for (int j = 0; j < n - 1; j++) {
                if (strs[j][i] != strs[j + 1][i]) {
                    return ans;
                }

                if (j == n - 2) {
                    ans += strs[0][i];
                }
            }
        }
        return ans;
    }
};