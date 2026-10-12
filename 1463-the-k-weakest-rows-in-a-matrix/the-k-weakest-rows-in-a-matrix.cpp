class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int , int>> arr;
        vector<int> ans;
        int m = mat.size();
        int n = mat[0].size();
        for(int i = 0 ; i < m ; i++) {
            int soldiers = 0;
            for(int j = 0 ; j < n ; j++) {
                if(mat[i][j] == 1) {
                    soldiers++;
                }
                else{
                    break;
                }
            }
            arr.push_back({soldiers , i});
        }
        sort(arr.begin() , arr.end());
        for(int i = 0 ; i < k ; i++) {
            ans.push_back(arr[i].second);
        }
        return ans;
    }
};