class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        //brute force


        // int maxi = 0;
        // int n = mat.size();
        // int m = mat[0].size();
        // int row = 0 ;
        // int column = 0 ;
        // for(int i = 0 ; i < n ; i++) {
        //     for(int j = 0 ; j < m ; j++){
        //         if(maxi < mat[i][j]) {
        //             maxi = mat[i][j];
        //             row = i;
        //             column = j;
        //         }
        //     }
        // }
        // return {row , column};

        //optimal


        int n = mat.size();
        int m = mat[0].size();
        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < m ; j++) {
                int up;
                if(i > 0){
                    up = mat[i-1][j];
                }
                else{
                    up = -1;
                }
                int down;
                if(i < n-1){
                    down = mat[i+1][j];
                }
                else{
                    down = -1;
                }
                int left;
                if(j > 0) {
                    left = mat[i][j-1];
                }
                else{
                    left = -1;
                }
                int right;
                if(j < m-1) {
                    right = mat[i][j+1];
                }
                else{
                    right = -1;
                }
                if(mat[i][j] > up && mat[i][j] > down && mat[i][j] > left && mat[i][j] > right) {
                    return {i,j};
                }
            }
        }
        return {};
    }
};