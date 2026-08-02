class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int evenSum = 0;
        int oddSum = 0;
        int n = piles.size();
        for(int i = 0 ; i < n ; i++) {
            if(i % 2 == 0) {
                evenSum += piles[i];
            }
            else{
                oddSum += piles[i];
            }
        }
        int Alice = 0;   //initial score of alice
        int Bob = 0;     //initial score of bob
        if(evenSum > oddSum) {
            Alice = evenSum;
            Bob = oddSum;
        }
        else{
            Bob = evenSum;
            Alice = oddSum;
        }
        return Alice > Bob;
    }
};