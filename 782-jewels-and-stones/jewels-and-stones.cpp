class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        // unordered_map<char,int> mpp;
        // for(int i = 0 ; i < stones.size() ; i++) {
        //     mpp[stones[i]]++;
        // }
        // int ans = 0 ;
        // for(int i = 0 ; i < jewels.size() ; i++) {
        //     ans += mpp[jewels[i]];
        // }
        // return ans ;

        
        bool isJewel[128] = {false};
        for(char ch : jewels){
            isJewel[ch] = true;
        }
        int cnt = 0;
        for(char ch : stones){
            if(isJewel[ch] == 1){
                cnt++;
            }
        }
        return cnt;
    }
};