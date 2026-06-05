class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n = sentence.size();
        unordered_set<char> st;
        if(sentence.length() < 26) {
            return false;
        }
        for(int i = 0 ; i < n ; i++) {
            st.insert(sentence[i]);
        }
        return st.size() == 26;
    }
};