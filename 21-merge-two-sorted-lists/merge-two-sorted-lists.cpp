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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // vector<int> arr;
        // while (list1 != NULL && list2 != NULL) {
        //     if (list1->val < list2->val) {
        //         arr.push_back(list1->val);
        //         list1 = list1->next;
        //     } else if (list2->val < list1->val) {
        //         arr.push_back(list2->val);
        //         list2 = list2->next;
        //     } else {
        //         arr.push_back(list1->val);
        //         list1 = list1->next;

        //         arr.push_back(list2->val);
        //         list2 = list2->next;
        //     }
        // }
        // while(list1 != NULL) {
        //     arr.push_back(list1->val);
        //     list1 = list1->next;
        // }
        // while(list2 != NULL) {
        //     arr.push_back(list2->val);
        //     list2 = list2->next;
        // }
        // ListNode* temp = new ListNode(-101);
        // ListNode* ans = temp;

        // for(int i = 0 ; i < arr.size() ; i++) {
        //     temp->next = new ListNode(arr[i]);
        //     temp = temp->next;
        // }
        // return ans -> next;



        ListNode* temp = new ListNode(-101);
        ListNode* ans = temp;
        while (list1 != NULL && list2 != NULL) {
            if (list1->val < list2->val) {
                temp->next = new ListNode(list1->val);
                temp = temp->next;
                list1 = list1->next;
            } else if (list2->val < list1->val) {
                temp->next = new ListNode(list2->val);
                temp = temp->next;
                list2 = list2->next;
            } else {
                temp->next = new ListNode(list1->val);
                temp = temp->next;
                list1 = list1->next;

                temp->next = new ListNode(list2->val);
                temp = temp->next;
                list2 = list2->next;
            }
        }
        while(list1 != NULL) {
            temp->next = new ListNode(list1->val);
            temp = temp->next;
            list1 = list1->next;
        }
        while(list2 != NULL) {
            temp->next = new ListNode(list2->val);
            temp = temp->next;
            list2 = list2->next;
        }
        return ans -> next;
    }
};