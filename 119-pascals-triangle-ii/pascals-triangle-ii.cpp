class Solution {
public:
    vector<int> getRow(int rowIndex) {
    vector<int> ans;
    long long result = 1;
    ans.push_back(result);
        for(int i = 1; i <= rowIndex; i++) {
         result = result * (rowIndex - i + 1);
         result = result / (i);
         ans.push_back(result);
         }
        return ans;
    }
};