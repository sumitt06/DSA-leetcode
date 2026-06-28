class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {

        //somewhere similar as ques no. 73 (set matrix zero)
        int n = mat.size();
        int m = mat[0].size();

        vector<int> row(n , 0);
        vector<int> column(m , 0);

        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < m ; j++) {
                if(mat[i][j] == 1) {
                    row[i]++;
                    column[j]++;
                }
            }
        }
        int ans = 0;
        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j< m ; j++) {
                if(mat[i][j] == 1 && row[i] == 1 && column[j] == 1) {
                    ans += 1;
                }
            }
        }
        return ans;
    }
};