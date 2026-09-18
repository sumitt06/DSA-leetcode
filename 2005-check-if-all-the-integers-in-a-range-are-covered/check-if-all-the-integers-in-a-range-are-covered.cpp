class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        for(int i = left ; i <= right ; i++) {
            int cover = 0;
            for(int j = 0 ; j < ranges.size() ; j++) {
                int start = ranges[j][0];
                int end = ranges[j][1];
                if(start <= i && i <= end) {
                    cover = 1;
                    break;
                }
            }
            if(cover == 0) {
                return false;
            }
        }
        return true;
    }
};