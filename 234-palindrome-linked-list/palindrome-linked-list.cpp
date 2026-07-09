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
    bool isPalindrome(ListNode* head) {
        // vector<int> arr;
        // while(head != NULL) {
        //     arr.push_back(head -> val);
        //     head = head-> next;
        // }
        // int i = 0 ;
        // int j = arr.size() - 1;
        // while(i <= j) {
        //     if(arr[i] != arr[j]) {
        //         return false;
        //     }
        //     i++;
        //     j--;
        // }
        // return true;

        ListNode* fast = head;
        ListNode* slow = head;
        while(fast != NULL && fast -> next != NULL) {
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        
        ListNode* curr = slow;
        ListNode* previous = NULL;
        ListNode* forward = NULL;

        while(curr != NULL) {
            forward = curr -> next;
            curr -> next = previous;
            previous = curr;
            curr = forward;
        }
        while(previous != NULL) {
            if(head -> val != previous -> val) {
                return false;
            }
            head = head->next;
            previous = previous->next;
        }
        return true;
    }
};