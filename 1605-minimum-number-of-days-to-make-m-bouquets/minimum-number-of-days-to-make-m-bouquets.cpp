class Solution {
public:

    bool can_make(vector<int>& bloomDay, int mid , int m , int k) {
        int consecutive = 0;
        int bouquets = 0;
        for(int x = 0 ; x < bloomDay.size() ; x++) {
            if (bloomDay[x] <= mid)
            {
                consecutive++;

                if (consecutive == k)
                {
                    bouquets++;
                    consecutive = 0;
                }
            }
            else
            {
                consecutive = 0;
            }
                
        }
        return bouquets >= m;
    }
    int minDays(vector<int>& bloomDay, long long m, long long k) {
        long long requiredFlower = m * k;
        if(requiredFlower > bloomDay.size()) {
            return -1;
        }

        int low = INT_MAX;
        int high = INT_MIN;

        for(int i = 0 ; i < bloomDay.size() ; i++)
        {
            low = min(low , bloomDay[i]);
            high = max(high , bloomDay[i]);
        }
        while(low < high)
        {
            int mid = (low + high) / 2 ;

            if (can_make(bloomDay , mid , m , k))
            {
                high = mid ;
            }
            else
            {
                low = mid + 1;
            }
        }
        return high;
    }
};