class Solution {
public:
    int largestAltitude(vector<int>& gain) {

        int n = gain.size();
        int startingAltitude = 0;
        int highest = 0;

        for (int i = 0; i < n; i++) {
            startingAltitude += gain[i];
            highest = max(highest, startingAltitude);
        }

        return highest;
    }
};