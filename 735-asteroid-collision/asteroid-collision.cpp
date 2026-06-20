class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        stack<int> st;
        for (int a : asteroids) {
            while (!st.empty() && st.top() > 0 && a < 0 && st.top() < -a) {
                st.pop();
            }
            if (!st.empty() && st.top() > 0 && a < 0) {
                if (st.top() == -a) {
                    st.pop();
                }
            } else {
                st.push(a);
            }
        }
        vector<int> ans;
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};