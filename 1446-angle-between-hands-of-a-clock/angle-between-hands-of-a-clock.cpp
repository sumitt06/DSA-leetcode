class Solution {
public:
    double angleClock(int hour, int minutes) {
        float angleOfMinutes = minutes * 6;
        // 0.5 * minutes check how much hour hand moves in every minutes (example hour = 12 and minute = 30 so 0.5 * minutes --> 0.5 * 30 --> 15 degree means in 30 minutes hour hand comes 15 degree after 12.  ANGLE BETWEEN 12 AND 1 IS 30 SO IN 30 MIN HOUR HAND COMES EXACT BETWEEN OF 12 AND 1 THAT IS 15 DEGREE)
        float angleOfHour = ((hour % 12) * 30) + (0.5 * minutes);
        float difference = abs(angleOfHour - angleOfMinutes);
        return min(difference , 360 - difference);
    }
};