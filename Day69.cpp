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
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr || head->next == nullptr || head->next->next == nullptr) return head;
        ListNode* curr = head->next->next;
        ListNode* ps = head->next;
        int poscount = 3;
        while(curr){
            if(poscount%2 != 0){
                ListNode* mark = ps;
                while(ps != curr){
                    int copy = ps->val; //might have to switch to int
                    ps->val = curr->val;
                    curr->val = copy;
                    ps = ps->next;
                }
                ps = mark->next;
            }
            poscount+=1;
            curr = curr->next;
        }
        return head;
    }
};
