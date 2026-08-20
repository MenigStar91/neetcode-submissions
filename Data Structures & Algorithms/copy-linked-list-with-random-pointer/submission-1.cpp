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
        if(head==nullptr) return nullptr;
        
        map<Node*, Node*> mp;

        Node *curr = new Node(head->val);
        curr->random = head->random;
        mp[head] = curr;

        head = head->next;
        Node *h = curr;
        while(head){   
            Node *temp = new Node(head->val);
            temp->random = head->random;
            mp[head] = temp;
            head = head->next;
            curr->next = temp;
            curr = temp;
        }

        curr = h;
        while(curr){
            curr->random = mp[curr->random];
            curr = curr->next;
        }

        return h;
    }
};
