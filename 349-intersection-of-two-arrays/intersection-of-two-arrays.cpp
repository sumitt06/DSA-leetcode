class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // unordered_set<int>st;
        // int n1 = nums1.size();
        // int n2 = nums2.size();
        // for(int i = 0 ; i < n1 ; i++) {
        //     for(int j = 0 ; j < n2 ; j++) {
        //         if(nums1[i] == nums2[j]) {
        //             st.insert(nums1[i]);
        //         }
        //     }
        // }
        // vector<int> ans;
        // for(int x : st) {
        //     ans.push_back(x);
        // }
        // return ans;

        vector<int> ans;
        sort(nums1.begin() , nums1.end());
        sort(nums2.begin() , nums2.end());

        int i = 0; 
        int j = 0;
        
        while(i < nums1.size() && j < nums2.size()) 
        {
            if(nums1[i] == nums2[j])
            {
                if(ans.empty() || ans.back() != nums1[i])
                {
                    ans.push_back(nums1[i]);
                }
                    i++;
                    j++;
            }
            else if(nums1[i] < nums2[j])
            {
                i++;
            }
            else 
            {
                j++;
            }
        }
        return ans;
        
    }
};