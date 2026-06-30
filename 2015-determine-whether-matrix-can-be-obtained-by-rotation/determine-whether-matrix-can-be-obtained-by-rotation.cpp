class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        if (mat == target) {
            return true;
        }
        int n = mat.size();
        // somewhere same as ques no. rotate image
        //  transpose by swapping elements across diagonal
        //90 degree means 1 time rotate by 90 degree
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(mat[i][j], mat[j][i]);
            }
        }
        // reverse every row
        for (int i = 0; i < n; i++) {
            reverse(mat[i].begin(), mat[i].end());
        }
        if (mat == target) {
            return true;
        }
        //180 degree means 2 time rotate by 90 degree
        else {
            for (int i = 0; i < n - 1; i++) {
                for (int j = i + 1; j < n; j++) {
                    swap(mat[i][j], mat[j][i]);
                }
            }
            // reverse every row
            for (int i = 0; i < n; i++) {
                reverse(mat[i].begin(), mat[i].end());
            }
            if (mat == target) {
                return true;
            }
            //270 degree means 3 time rotate by 90 degree
            else {
                for (int i = 0; i < n - 1; i++) {
                    for (int j = i + 1; j < n; j++) {
                        swap(mat[i][j], mat[j][i]);
                    }
                }
                // reverse every row
                for (int i = 0; i < n; i++) {
                    reverse(mat[i].begin(), mat[i].end());
                }
                if(mat == target) {
                    return true;
                }
            }
        }
        return false;
    }
};