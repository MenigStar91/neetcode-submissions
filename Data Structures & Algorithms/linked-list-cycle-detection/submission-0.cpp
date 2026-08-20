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
    bool hasCycle(ListNode* head) {
        ListNode* curr = head;
        if(head == nullptr) return false;
        head = head->next;

        while(head && head->next){
            if(curr == head) return true;
            curr = curr->next;
            head = head->next->next;
        }

        return false;
    }
};
