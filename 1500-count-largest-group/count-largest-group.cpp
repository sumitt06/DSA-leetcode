class Solution {
public:
    int countLargestGroup(int n) {
        vector<int> arr(37);
        for(int i = 1 ; i <= n ; i++) {
            int sum = 0;
            int temp = i;
            while(temp > 0) {
                sum += temp % 10;
                temp /= 10;
            }
            arr[sum]++;
        }
        int maxi = 0;
        for(int i = 0 ; i < 37 ; i++) {
            maxi = max(maxi , arr[i]);
        }
        int cnt = 0;
        for(int i = 0 ; i < 37 ; i++) {
            if(maxi == arr[i]) {
                cnt++;
            }
        }
        return cnt;
    }
};