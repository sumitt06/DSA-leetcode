class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mpp;
        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            mpp[s[i]]++;
        }
        for (auto it : mpp) {
            if (it.second % 2 == 0) {
                ans += it.second;
            }
            else {
                ans += it.second - 1;
            }
        }
        for(auto it : mpp) {
            if(it.second % 2 != 0) {
                ans++;
                break;
            }
        }
        return ans;
    }
};