class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        // int n = grid.size();
        // int m = grid[0].size();
        // int cnt = 0;
        // for(int i = 0 ;  i < n ; i++) {
        //     for(int j = 0 ; j < m ; j++) {
        //         if(grid[i][j] < 0) {
        //             cnt++;
        //         }
        //     }
        // }
        // return cnt;

        int n = grid.size();
        int m = grid[0].size();
        int i = 0 ;
        int j = m - 1 ;
        int cnt = 0 ;
        while(i < n && j >= 0)
        {
            if(grid[i][j] < 0)
            {
                cnt += n - i;
                j--;
            }
            else
            {
                i++;
            }
        }
        return cnt;
    }
};