class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int maxi = 0;
        int n = mat.size();
        int m = mat[0].size();
        int row = 0 ;
        int column = 0 ;
        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < m ; j++){
                if(maxi < mat[i][j]) {
                    maxi = mat[i][j];
                    row = i;
                    column = j;
                }
            }
        }
        return {row , column};
    }
};