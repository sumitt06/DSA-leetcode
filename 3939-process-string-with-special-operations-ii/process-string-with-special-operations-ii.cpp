class Solution {
public:
    char processStr(string s, long long k) {
        // int n = s.size();
        // string result;
        // for (int i = 0; i < n; i++) {
        //     if (s[i] >= 'a' && s[i] <= 'z') {
        //         result.push_back(s[i]);
        //     } else if (s[i] == '*') {
        //         if (!result.empty()) {
        //             result.pop_back();
        //         }
        //     } else if (s[i] == '#') {
        //         result += result;
        //     } else if (s[i] == '%') {
        //         reverse(result.begin(), result.end());
        //     }
        // }

        // if (k >= result.size()) {
        //     return '.';
        // }
        // return result[k];

        int n = s.size();
        long long len = 0;
        for(int i = 0 ; i < n ; i++) {
            if(s[i] == '*') {
                if(len > 0) {
                    len--;
                }
            }
            else if(s[i] == '#') {
                len *= 2;
            }
            else if(s[i] == '%') {
                //nothing to change in len because we just reverse result so len remains same 
                continue;
            }
            else{
                // s[i] belong beetween a to z (a <= s[i] <= z)
                len++;
            }
        }

        if(k >= len) {
            return '.';
        }

        for(int i = n-1 ; i >= 0 ; i--) {
            if(s[i] == '*') {
                // no change in k
                len++; 
            }
            else if(s[i] == '%') {
                // no change in len because we just reverse the result so len remains same or constant
                k = len - k - 1;
            }
            else if(s[i] == '#') {
                len = len/2;
                if(k >= len) {
                    k = k - len;
                }
            }
            else{
                // between 'a' to 'z'
                len--;
            }
            if(len == k) {
                return s[i];
            }
        }
        return '.';
    }
};