class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> altitude;
        int n = gain.size();
        int startingAltitude = 0;
        altitude.push_back(startingAltitude);
        for(int i = 0 ; i < n ; i++) {
            startingAltitude += gain[i];
            altitude.push_back(startingAltitude);
        }
        int m = altitude.size();
        int highest = INT_MIN;
        for(int i = 0 ; i < m ; i++) {
            highest = max(highest , altitude[i]);
        }
        return highest;
    }
};