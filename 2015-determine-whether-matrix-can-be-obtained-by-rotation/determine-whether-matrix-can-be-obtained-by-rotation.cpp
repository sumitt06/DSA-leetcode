class Solution {
public:
    void rotate(vector<vector<int>>& mat) { //rotate(mat)
        int n = mat.size();
        // transpose by swapping elements across diagonal
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(mat[i][j], mat[j][i]);
            }
        }
        // reverse every row
        for (int i = 0; i < n; i++) {
            reverse(mat[i].begin(), mat[i].end());
        }
    }

    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        //   //0 degree rotation
        // if (mat == target) {
        //     return true;
        // }
        // int n = mat.size();
        //   // somewhere same as ques no. rotate image
        //   //  transpose by swapping elements across diagonal
        //   //90 degree means 1 time rotate by 90 degree
        // for (int i = 0; i < n - 1; i++) {
        //     for (int j = i + 1; j < n; j++) {
        //         swap(mat[i][j], mat[j][i]);
        //     }
        // }
        //   // reverse every row
        // for (int i = 0; i < n; i++) {
        //     reverse(mat[i].begin(), mat[i].end());
        // }
        // if (mat == target) {
        //     return true;
        // }
        //   //180 degree means 2 time rotate by 90 degree
        // else {
        //     for (int i = 0; i < n - 1; i++) {
        //         for (int j = i + 1; j < n; j++) {
        //             swap(mat[i][j], mat[j][i]);
        //         }
        //     }
        //     // reverse every row
        //     for (int i = 0; i < n; i++) {
        //         reverse(mat[i].begin(), mat[i].end());
        //     }
        //     if (mat == target) {
        //         return true;
        //     }
        //     //270 degree means 3 time rotate by 90 degree
        //     else {
        //         for (int i = 0; i < n - 1; i++) {
        //             for (int j = i + 1; j < n; j++) {
        //                 swap(mat[i][j], mat[j][i]);
        //             }
        //         }
        //         // reverse every row
        //         for (int i = 0; i < n; i++) {
        //             reverse(mat[i].begin(), mat[i].end());
        //         }
        //         if(mat == target) {
        //             return true;
        //         }
        //     }
        // }
        // return false;

        // we repeat same code 3 time so make a function is better thing

        for (int i = 0; i < 4; i++) { // we use 4 because we have to rotate only
                                      // for 3 time at worst
            if (mat == target) {
                return true;
            }
            rotate(mat);
        }
        return false;
    }
};