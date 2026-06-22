class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char , int> mpp;
        for(char ch : text) {
            if(ch == 'b' || ch == 'a' || ch == 'l' || ch == 'o' || ch == 'n') {
                mpp[ch]++;
            }
        }
        return min({mpp['b'] , mpp['a'] , mpp['l'] / 2 , mpp['o'] / 2 , mpp['n']});
    }
};