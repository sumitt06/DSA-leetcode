/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> arr1;
        ListNode* temp = l1;
        while (temp != NULL) {
            arr1.push_back(temp->val);
            temp = temp->next;
        }
        vector<int> arr2;
        temp = l2;
        while (temp != NULL) {
            arr2.push_back(temp->val);
            temp = temp->next;
        }
        vector<int> ans;
        int carry = 0;
        int n = max(arr1.size(), arr2.size());
        for (int i = 0; i < n; i++) {
            int sum = 0;
            if (i < arr1.size()){
                sum += arr1[i];
            }
            if (i < arr2.size()){
                sum += arr2[i];
            }
            sum += carry;
            ans.push_back(sum % 10);
            carry = sum / 10;
        }
        if (carry > 0) {
            ans.push_back(carry);
        }
        ListNode* answer = new ListNode(ans[0]);
        temp = answer;
        for (int i = 1; i < ans.size(); i++) {
            temp->next = new ListNode(ans[i]);
            temp = temp->next;
        }
        return answer;
    }
};