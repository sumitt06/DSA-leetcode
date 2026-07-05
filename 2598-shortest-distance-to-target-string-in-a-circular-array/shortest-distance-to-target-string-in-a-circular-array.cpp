class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n = words.size();
        //here i is the distance that we have to return
        for (int i = 0; i < n; i++) {
            int right = (startIndex + i) % n;
            if (words[right] == target)
                return i;

            int left = (startIndex - i + n) % n;
            if (words[left] == target)
                return i;
        }

        return -1;
    }
};