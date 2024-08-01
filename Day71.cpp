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
    ListNode* reverse(ListNode* currhead, int k) {
        ListNode* temp = currhead;
        ListNode* before = nullptr;
        int n = 0;
        while(temp != nullptr && n<k){
            n+=1;
            ListNode* front = temp->next;
            temp->next = before;
            before = temp;
            temp = front;
        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevhead = nullptr; //head of the previous group
        ListNode* returnhead = nullptr; //head we supposed to return at the end
        while(temp){
            int n = 1;
            ListNode* currhead = temp; //head of the current group
            while(temp != nullptr && n<k){
                n+=1;
                temp = temp->next; //temp stops at the tail of the current group
            }
            if(prevhead == nullptr) returnhead = temp;
            if(temp != nullptr && n == k){
                if(prevhead) prevhead->next = temp;
                ListNode* newhead = reverse(currhead, k); //head of the next group
                prevhead = currhead;
                temp = newhead;
            }
            else{ //n<k only, because there is no n>k situation(ig)
                if(prevhead) prevhead->next = currhead;
            }
        }
        return returnhead;
    }
};
