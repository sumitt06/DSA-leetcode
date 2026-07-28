class Solution {
public:
    string smallestPalindrome(string s) {
        string ans = "";
        int n = s.size();
        if(n == 1) {
            return s;
        }
        
        sort(s.begin(), s.begin() + n / 2);
        
        for(int i = 0 ; i < n/2 ; i++) {
            ans += s[i];
        }
        if(n % 2 == 1) {
            ans += s[n/2];
        }
        for(int i = n/2 - 1 ; i >= 0 ; i--) {
            ans += s[i];
        }
        return ans;
    }
};