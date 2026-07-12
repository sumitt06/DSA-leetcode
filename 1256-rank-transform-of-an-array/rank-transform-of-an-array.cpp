class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> sortedArr = arr;
        map<int, int> ranks;
        int rank = 1;
        sort(sortedArr.begin(), sortedArr.end());
        for (int i = 0; i < sortedArr.size(); i++) {
            if (ranks.find(sortedArr[i]) == ranks.end()) {
                ranks[sortedArr[i]] = rank;
                rank++;
            }
        }
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = ranks[arr[i]];
        }
        return arr;
    }
};