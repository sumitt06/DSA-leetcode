class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(),
             [](vector<int>& a, vector<int>& b) { // this is Lambda Function
                 if (a[0] == b[0]) {
                     return a[1] > b[1];
                 } else {
                     return a[0] < b[0];
                 }
             });
        int n = intervals.size();
        int maxRight = INT_MIN;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (intervals[i][1] <= maxRight) {
                cnt++;
            }
            maxRight = max(maxRight, intervals[i][1]);
        }
        return n - cnt;
    }
};