class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        int j = 0;
        unordered_map<char, int> mpp;
        int len = 0;
        if (s.size() == 0) {
            return 0;
        }
        if (s.size() == 1) {
            return 1;
        }
        while (j < s.size()) {
            if (mpp.find(s[j]) == mpp.end()) {
                mpp[s[j]] = 1;
                len = max(len, j - i + 1);
                j++;
            } else {
                while (mpp.find(s[j]) != mpp.end()) {
                    mpp.erase(s[i]);
                    i++;
                }
            }
        }
        return len;
    }
};