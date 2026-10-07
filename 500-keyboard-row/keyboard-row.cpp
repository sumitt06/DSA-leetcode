class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        // map<char, int> mpp = {
        //     {'q', 1}, {'w', 1}, {'e', 1}, {'r', 1}, {'t', 1}, {'y', 1},
        //     {'u', 1}, {'i', 1}, {'o', 1}, {'p', 1}, {'Q', 1}, {'W', 1},
        //     {'E', 1}, {'R', 1}, {'T', 1}, {'Y', 1}, {'U', 1}, {'I', 1},
        //     {'O', 1}, {'P', 1},

        //     {'a', 2}, {'s', 2}, {'d', 2}, {'f', 2}, {'g', 2}, {'h', 2},
        //     {'j', 2}, {'k', 2}, {'l', 2}, {'A', 2}, {'S', 2}, {'D', 2},
        //     {'F', 2}, {'G', 2}, {'H', 2}, {'J', 2}, {'K', 2}, {'L', 2},

        //     {'z', 3}, {'x', 3}, {'c', 3}, {'v', 3}, {'b', 3}, {'n', 3},
        //     {'m', 3}, {'Z', 3}, {'X', 3}, {'C', 3}, {'V', 3}, {'B', 3},
        //     {'N', 3}, {'M', 3},
        // };
        // vector<string> ans;
        // for (int i = 0; i < words.size(); i++) {
        //     for (int j = 0; j < words[i].size(); j++) {
        //         if (j > 0 && mpp[words[i][j]] != mpp[words[i][j - 1]]) {
        //             break;
        //         }
        //         if (j == words[i].size() - 1) {
        //             ans.push_back(words[i]);
        //         }
        //     }
        // }
        // return ans;

        string row1 = "qwertyuiopQWERTYUIOP";
        string row2 = "asdfghjklASDFGHJKL";
        string row3 = "zxcvbnmZXCVBNM";

        vector<string> ans;

        for(int i = 0 ; i < words.size() ; i++) {
            string row;

            if(row1.find(words[i][0]) != string::npos) {
                row = row1;
            }
            else if(row2.find(words[i][0]) != string::npos) {
                row = row2;
            }
            else {
                row = row3;
            }

            for(int j = 0 ; j < words[i].size() ; j++) {
                if(row.find(words[i][j]) == string::npos) {
                    break;
                }
                if(j == words[i].size() - 1) {
                    ans.push_back(words[i]);
                }
            }
        }
        return ans;
    }
};