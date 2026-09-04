class Solution {
public:
    bool canEat(vector<int>& piles , int mid , int h) {
        long long used_h = 0;
        for(int x = 0 ; x < piles.size() ; x++) {
            used_h += (piles[x] + mid - 1) / mid ;
        }
        return used_h <= h;
    }


    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int i = 1 ; 
        int j = *max_element(piles.begin() , piles.end());
        while(i < j) {
            int mid = (i + j) / 2 ;
            if (canEat(piles,mid,h)) {
                j = mid ;
            }
            else {
                i = mid + 1;
            }
        }
        return i;
    }
};