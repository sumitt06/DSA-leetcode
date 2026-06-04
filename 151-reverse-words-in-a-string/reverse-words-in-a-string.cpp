class Solution {
public:
    string reverseWords(string s) {
        vector<string> answer;
        string word;
        stringstream ss(s);
        // 
        while(ss >> word) {
            answer.push_back(word);
        }
        int i = 0;
        int j = answer.size() - 1;
        //swap every element in the vector answer
        while(i < j) {
            swap(answer[i] , answer[j]);
            i++;
            j--;
        }
        string result = "";
        for(int k = 0 ; k < answer.size() ; k++) {
            result += answer[k];
            if(k < answer.size()-1) {
                result += " ";
            }
        }
        return result;
    }
};