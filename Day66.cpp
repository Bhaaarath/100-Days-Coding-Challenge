/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp = node->next;
        ListNode* prev = node;
        while(temp->next != nullptr){
            prev->val = temp->val;
            prev = temp;
            temp = temp->next;
        }
        prev->val = temp->val;
        prev->next = nullptr;
    }
};
