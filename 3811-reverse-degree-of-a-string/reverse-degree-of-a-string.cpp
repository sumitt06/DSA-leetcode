class Solution {
public:
    int reverseDegree(string s) {
        string alphabets = "zyxwvutsrqponmlkjihgfedcba";
        unordered_map<char , int>mpp;
        for(int i = 0 ; i <= 26 ; i++) {
            mpp[alphabets[i]] = i + 1;
        }
        int sum = 0;
        for(int i = 0 ; i < s.size() ; i++) {
            int product = mpp[s[i]] * (i + 1);
            sum += product;
        }
        return sum;
    }
};