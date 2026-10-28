class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int n = derived.size();
        vector<int> original(n);
        original[0] = 0;
        for(int i = 0 ; i < n - 1 ; i++){
            original[i + 1] = derived[i] ^ original[i];
        }
        for(int i = 0 ; i < n ; i++) {
            if(derived[i] != original[i] ^ original[(i + 1) % n]) {
                break;
            }
            if(i == n - 1) {
                return true;
            }
        }

        original[0] = 1;
        for(int i = 0 ; i < n - 1 ; i++){
            original[i + 1] = derived[i] ^ original[i];
        }
        for(int i = 0 ; i < n ; i++) {
            if(derived[i] != original[i] ^ original[(i + 1) % n]) {
                break;
            }
            if(i == n - 1) {
                return true;
            }
        }
        return false;
    }
};