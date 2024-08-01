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
    int sizeofLL(ListNode* head) {
        ListNode* temp = head;
        int n = 0;
        while(temp){
            n+=1;
            temp = temp->next;
        }
        return n;
    }
    ListNode* findTail(ListNode* head) {
        ListNode* temp = head;
        ListNode* before = nullptr;
        while(temp->next){
            before = temp;
            temp = temp->next;
        }
        return before;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || head->next == nullptr) return head;
        int n = sizeofLL(head);
        k %= n;
        ListNode* curr_head = head;
        while(k--){
            ListNode* fut_tail = findTail(curr_head); //pass the head of the current iteration
            ListNode* fut_head = fut_tail->next;
            fut_tail->next = nullptr;
            fut_head->next = curr_head;
            curr_head = fut_head;
        }
        return curr_head;
    }
};
