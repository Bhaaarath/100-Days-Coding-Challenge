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
    ListNode* reverseLL(ListNode* head){
        ListNode* curr = head;
        ListNode* back = nullptr;
        while(curr != nullptr){
            ListNode* front = curr->next;
            curr->next = back;
            back = curr;
            curr = front;
        }
        return back;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //head of original LL
        ListNode* temp = head;

        //head of reversed LL
        ListNode* newhead = reverseLL(temp);
        ListNode* curr = newhead;

        //if head deletion
        if(n == 1){
            ListNode* nh = curr->next;
            curr->next = nullptr;
            delete(curr);
            return reverseLL(nh);
        }

        //any other node deletion
        int count = 0;
        ListNode* before = nullptr;
        while(curr){
            count+=1;
            if(count == n){
                before->next = curr->next;
                curr->next = nullptr;
                delete(curr);
                break;
            }
            before = curr;
            curr = curr->next;
        }
        return reverseLL(newhead);
    }
};
