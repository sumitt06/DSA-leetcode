class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n = mat.size() ;
        int m = mat[0].size();
        if(r == n && c == m) {
            return mat;
        }
        if (n * m != r * c) {
            return mat;
        }
        vector<int> list;
        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < m ; j++) {
                list.push_back(mat[i][j]);
            }
        }
        vector<vector<int>> ans(r, vector<int>(c));
        int k = 0;
        for(int i = 0 ; i < r ; i++) {
            for(int j = 0 ; j < c ; j++) {
                ans[i][j] = list[k];
                k++;
            }
        }
        return ans;
    }
};