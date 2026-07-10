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
    int getDecimalValue(ListNode* head) {
        // vector<int> arr;
        // while(head != NULL) {
        //     arr.push_back(head -> val);
        //     head = head -> next;
        // }
        // long long k = 1;
        // long long sum = 0;
        // for(int i = arr.size() - 1 ; i >= 0 ; i--) {
        //     sum += arr[i] * k;
        //     k *= 2;
        // }
        // return sum;


        int ans = 0;
        while(head != NULL) {
            ans = ans * 2 + head -> val;
            head = head -> next;
        }
        return ans;
    }
};