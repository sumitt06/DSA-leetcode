class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n = digits.size() ;
        int ans = 0 ;
        vector<int> visited(1000 , 0) ;
        for(int i = 0 ; i < n ; i++) {
            if(digits[i] == 0) {
                continue ;
            }
            for(int j = 0 ; j < n ; j++) {
                if(i == j) {
                    continue ;
                }
                for(int k = 0 ; k < n ; k++) {
                    if(i == k || j == k || digits[k] % 2 != 0) {
                        continue ;
                    }
                    int num = digits[i] * 100 + digits[j] * 10 + digits[k] ;
                    visited[num]++;
                    if(visited[num] == 1) {
                        ans++;
                    }
                }
            }
        }
        return ans;  
    }
};