class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int n = patterns.size();
        int count = 0;
        for(int i = 0 ; i < n ; i++) {
            //npos is a special constant of strin that means not found
            //it work as .end()
            //!= string::npos means patterns[i] is not presend in word
            //let word is "abc" and patterns[i] is "ab". if it is in word so it never be equal to string::npos means we found "ab" in word = "abc" means patterns[i] "ab" is a substring of word "abc"
            if(word.find(patterns[i]) != string::npos) {
                count++;
            }
        }
        return count;
    }
};