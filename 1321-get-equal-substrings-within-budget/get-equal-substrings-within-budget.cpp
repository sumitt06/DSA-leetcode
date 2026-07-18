class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int i = 0;
        int j = 0;
        int costs = 0; // used for sum of all the costs "[abs(s[i] - t[i])]"
        int maxLen = INT_MIN;
        while (j < s.size()) {
            costs += abs(s[j] - t[j]);

            while (costs > maxCost) {
                costs -= abs(s[i] - t[i]);
                i++;
            }
            if (costs <= maxCost) {
                maxLen = max(maxLen, j - i + 1);
            }
            j++;
        }
        return maxLen;
    }
};