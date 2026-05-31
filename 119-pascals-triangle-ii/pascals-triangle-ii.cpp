class Solution {
public:
    vector<int> getRow(int rowIndex) {
    vector<int> ans;
    for(int c = 0; c <= rowIndex; c++) {
            long long result = 1;
        for(int i = 0; i < c; i++) {
         result = result * (rowIndex - i);
         result = result / (i + 1);
         }
            ans.push_back(result);
       }
        return ans;
    }
};