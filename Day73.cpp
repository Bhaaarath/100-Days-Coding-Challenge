/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    void customFunc(Node* subhead, Node* temp) {
        Node* subtail = tailDLL(subhead);
            Node* front = temp->next;
            temp->next = subhead;
            subhead->prev = temp;
            subtail->next = front;
            if(front)front->prev = subtail;
            temp->child = nullptr;
            temp = front;
    }
    Node* tailDLL(Node* subhead) {
        Node* curr = subhead;
        Node* before = nullptr;
        while(curr){
            before = curr;
            curr = curr->next;
        }
        return before;
    }
    Node* flatten(Node* head) {
        //if(head == nullptr || head->next == nullptr) return head;
        Node* temp = head;
        while(temp){
            if(temp->child != nullptr){
                Node* subhead = flatten(temp->child);
                customFunc(subhead, temp);
            }
            else temp = temp->next;
        }
        return head;
    }
};
