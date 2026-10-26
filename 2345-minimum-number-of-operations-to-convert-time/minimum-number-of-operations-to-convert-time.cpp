class Solution {
public:
    int convertTime(string current, string correct) {
        int hours1 = stoi(current.substr(0 , 2));
        int min1 = stoi(current.substr(3 , 2));

        int time1 = hours1 * 60;
        time1 += min1;

        int hours2 = stoi(correct.substr(0 , 2));
        int min2 = stoi(correct.substr(3 , 2));

        int time2 = hours2 * 60;
        time2 += min2;

        int required = time2 - time1;

        int ans = 0;

        while(required >= 60) {
            ans++;
            required = required - 60;
        }

        while(required >= 15) {
            ans++;
            required = required - 15;
        }

        while(required >= 5) {
            ans++;
            required = required - 5;
        }

        ans += required;

        return ans;
    }
};