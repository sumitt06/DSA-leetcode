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
    ListNode* reverseList(ListNode* head) {
        // ListNode* curr = head;
        // ListNode* previous = NULL;
        // ListNode* forward = NULL;

        // while(curr != NULL) {
        //     forward = curr -> next;
        //     curr -> next = previous;
        //     previous = curr;
        //     curr = forward;
        // }
        // return previous;


        // //brute force approach by using vector array
        // vector<int> arr;
        // ListNode* temp = head;
        // while (temp != NULL) {
        //     arr.push_back(temp->val);
        //     temp = temp->next;
        // }
        // temp = head;
        // for (int i = arr.size() - 1; i >= 0; i--) {
        //     temp->val = arr[i];
        //     temp = temp->next;
        // }
        // return head;

        //better approach by using stack
        stack<int> st;
        ListNode* temp = head;
        while(temp != NULL) {
            st.push(temp->val);
            temp = temp -> next;
        }
        temp = head;
        while(temp != NULL) {
            temp -> val = st.top();
            st.pop();
            temp = temp -> next;
        }
        return head;
    }
};