class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int onesCount = 0;
        int row = 0;
        int n = mat.size();
        int m = mat[0].size();
        for(int i = 0 ; i < n ; i++) {
            int cnt = 0;
            for(int j = 0 ; j < m ; j++) {
                if(mat[i][j] == 1) {
                    cnt++;
                }
            }
            if(cnt > onesCount) {
                row = i;
            }
            onesCount = max(cnt , onesCount);
        }
        return {row , onesCount};
    }
};