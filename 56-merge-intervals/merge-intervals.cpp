class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {


        // brute solution


        // int n = intervals.size();
        // sort(intervals.begin() , intervals.end());      // TC = O(n log n)
        // vector<vector<int>> ans;                        // SC = O(n)
        // for(int i = 0 ; i < n ; i++) {                  // TC = O(n^2)
        //     int start = intervals[i][0];
        //     int end = intervals[i][1];
        //     if(!ans.empty() && end <= ans.back()[1]) {
        //         continue;
        //     }
        //     else{
        //         for(int j = i + 1 ; j < n ; j++) {
        //             if(intervals[j][0] <= end) {               
        //                 end = max (end , intervals[j][1]);
        //             }
        //             else{
        //                 break;
        //             }
        //         }
        //     }
        //     ans.push_back({start , end});
        // }
        // return ans;


        // optimal solution

        int n = intervals.size();
        sort(intervals.begin() , intervals.end());
        vector<vector<int>> ans;
        for(int i = 0 ; i < n ; i++) {
            if(ans.empty() || intervals[i][0] > ans.back()[1]) {
                ans.push_back(intervals[i]);
            }
            else{
                ans.back()[1] = max(intervals[i][1] , ans.back()[1]);
            }
        }
        return ans;
    }
};