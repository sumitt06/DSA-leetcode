class Solution {
public:
    int numberOfSubstrings(string s) {
        // int n = s.size();
        // int cnt = 0;
        // for(int i = 0 ; i < n ; i++) {
        //     string sub = "";
        //     for(int j = i ; j < n ; j++) {
        //         sub += s[j];
        //         if (sub.find('a') != string::npos &&
        //             sub.find('b') != string::npos &&
        //             sub.find('c') != string::npos) {
        //             cnt++;
        //         }
        //     }
        // }
        // return cnt;

        int n = s.size();
        int left = 0;
        int ans = 0;

        vector<int> frequency(3,0);
        for(int right = 0 ; right < n ; right++) {
            frequency[s[right] - 'a']++; //it check the freq of a , b , c 
            while(frequency[0] > 0 && frequency[1] > 0 && frequency[2] > 0) {
                ans += n - right;

                frequency[s[left] - 'a']--; //it decrease the frequency of s[left] element
                left++;
            }
        }
        return ans;
    }
};