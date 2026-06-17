class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin() , cost.end());
        int n = cost.size();
        int sum = 0;
        int sum1 = 0;
        for(int i = 0 ; i < n ; i++) {
            sum += cost[i];
        }
        for(int i = n-3 ; i >= 0 ; i = i-3) {
            sum1 += cost[i];
        }
        return sum - sum1;
    }
};