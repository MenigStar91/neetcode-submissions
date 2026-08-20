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

        Node *curr = nullptr;
        Node *h = nullptr;
        while(head){   
            Node *temp = new Node(head->val);
            temp->random = head->random;
            mp[head] = temp;
            head = head->next;
            if(!h) h = temp;
            if(curr) curr->next = temp;
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
