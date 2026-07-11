class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        map<char, int> mpp;
        for (int i = 0; i < p.size(); i++) {
            mpp[p[i]]++;
        }
        int i = 0, j = 0, k = p.size(), cnt = mpp.size();
        vector<int> ans;
        while (j < s.size()) {
            if (mpp.find(s[j]) != mpp.end()) {
                mpp[s[j]]--;
                if (mpp[s[j]] == 0) {
                    cnt--;
                }
            }
            if(cnt == 0) {
                ans.push_back(i);
            }
            if(j - i + 1 < k) {
              j++;
            }
            else if (j - i + 1 == k) {
                if(mpp.find(s[i]) != mpp.end()) {
                    if(mpp[s[i]] == 0) {
                        cnt++;
                    }
                    mpp[s[i]]++;
                }
                i++;
                j++;
            }
        }
        return ans;
    }    
};