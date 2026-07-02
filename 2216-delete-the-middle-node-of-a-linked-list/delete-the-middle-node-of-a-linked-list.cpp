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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* middle = head;
        ListNode* temp = head;
        ListNode* previous = NULL;
        if (temp == NULL || temp->next == NULL)
            return NULL;
        while (temp != NULL && temp->next != NULL) {
            previous = middle;
            middle = middle->next;
            temp = temp->next->next;
        }
        previous -> next = previous->next->next;
        return head;
    }
};