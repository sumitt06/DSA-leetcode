class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
        unordered_map<char,int> mpp;
        for(int i = 0 ; i < n ; i++) {
            if(mpp.find(s[i]) == mpp.end()) {
                mpp[s[i]] = i ;
            }
            else{
                mpp[s[i]] = -1;
            }
        }
        for (int j=0;j<n;j++){
            if (mpp[s[j]]!=-1){
                return j;
            }

        
        }
        return -1;
    }
};