class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        int n = s1.size();
        if(s1 == s2) {
            return true;
        }
        for(int i = 0 ; i < n - 2 ; i++) {
            swap(s1[i] , s1[i + 2]);
            if(s1 == s2){
                return true;
            }
        }
        if(s1 != s2){
            swap(s1[0] , s1[2]);
            return s1 == s2;
        }else{
            return true;
        }
        return false;
    }
};