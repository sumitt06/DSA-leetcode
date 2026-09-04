class Solution {
public:
    bool can_ship(vector<int>& weights, int days , int mid) {
        int load = 0;
        int used_days = 1;
        for(int x = 0 ; x < weights.size() ; x++) {
            if (load + weights[x] > mid) {
                used_days++;
                load = 0;
            }

            load += weights[x];
        }
        return used_days <= days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int maxi = 0;
        int sum = 0;
        for(int i = 0 ; i < weights.size() ;i++) {
            maxi = max(weights[i] , maxi);
            sum += weights[i];
        }
        int low = maxi;
        int high = sum;
        while (low < high) {
            int mid = (low + high) / 2;

            if (can_ship(weights, days, mid))
                high = mid;
            else
                low = mid + 1;
        }

        return low;
    }
};