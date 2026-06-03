class Solution {
public:
    
    bool isPalindrome(string s) {
        int n = s.size();
        int left = 0 ;
        int right = n - 1;
        string str = "";
        for(int i = 0 ; i < n ; i++) {
            if(isalnum(s[i])){
                str += tolower(s[i]);
            }
        }
        string rev=str;
        reverse(rev.begin(),rev.end());

        
        return rev==str;
    }
};