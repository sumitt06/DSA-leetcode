class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice,
                          string arriveBob, string leaveBob) {
        vector<int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        int a1 = 0 ;
        int a2 = 0 ;
        int b1 = 0 ;
        int b2 = 0 ;

        int month = stoi(arriveAlice.substr(0, 2));
        int day = stoi(arriveAlice.substr(3));

        int i = 0;
        while (i < month - 1) {
            a1 = a1 + days[i];
            i++;
        }
        a1 = a1 + day; 

        month = stoi(leaveAlice.substr(0, 2));
        day = stoi(leaveAlice.substr(3));

        i = 0;
        while (i < month - 1) {
            a2 = a2 + days[i];
            i++;
        }
        a2 = a2 + day;

        month = stoi(arriveBob.substr(0, 2));
        day = stoi(arriveBob.substr(3));

        i = 0;
        while (i < month - 1) {
            b1 = b1 + days[i];
            i++;
        }
        b1 = b1 + day;

        month = stoi(leaveBob.substr(0, 2));
        day = stoi(leaveBob.substr(3));

        i = 0;
        while (i < month - 1) {
            b2 = b2 + days[i];
            i++;
        }
        b2 = b2 + day;

        int start = max(a1 , b1);
        int end = min(a2 , b2);

        int ans = end - start + 1;;

        if(ans < 0) {
            return 0;
        }
        return ans; 
    }
};