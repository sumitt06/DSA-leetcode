class Solution {
public:
    int findTheWinner(int n, int k) {
        // int ans = 0;
        // for(int i = 1 ; i <= n ; i++) {
        //     ans = (ans + k) % i;
        // }
        // return ans + 1;
        vector<int> arr;
        for (int i = 1; i <= n; i++) {
            arr.push_back(i);
        }
        int idx = 0;
        while (arr.size() > 1) {
            idx = (idx + k - 1) % arr.size();
            arr.erase(arr.begin() + idx);
        }
        return arr[0];
    }
};