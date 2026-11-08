class Solution {
public:
    string sortVowels(string s) {
        vector<char> arr;
        string vowel = "aeiouAEIOU";
        for(int i = 0 ; i < s.size() ; i++){
            if(vowel.find(s[i]) != string::npos){
                arr.push_back(s[i]);
            }
        }
        sort(arr.begin() , arr.end());
        int j = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(vowel.find(s[i]) != string::npos){
                s[i] = arr[j];
                j++;
            }
        }
        return s;
    }
};