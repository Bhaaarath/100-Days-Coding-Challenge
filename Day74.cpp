/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == nullptr) return nullptr;
        Node* temp = head->next; // to traverse the existing LL
        Node* newhead = new Node(head->val); // new head of newly created LL
        Node* newtemp = newhead; // to traverse new LL
        
        while(temp){ //make the next connections first
            Node* curr = new Node(temp->val);
            newtemp->next = curr;
            newtemp = curr;
            temp = temp->next;
        }

        temp = head;
        newtemp = newhead;
        while(temp){
            if(temp->random != nullptr){
                Node* itr = head;
                int finderindex = 0;
                while(itr != temp->random){
                    finderindex+=1;
                    itr = itr->next;
                }
                
                itr = newhead;
                int setterindex = 0;
                while(setterindex < finderindex){
                    setterindex+=1;
                    itr = itr->next;
                }
                newtemp->random = itr;
            }
            temp = temp->next;
            newtemp = newtemp->next;
        }
        return newhead;
    }
};
