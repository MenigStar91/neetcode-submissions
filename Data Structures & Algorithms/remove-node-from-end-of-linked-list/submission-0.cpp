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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int count = 0;
        ListNode* temp = head;
        while(temp){
            temp = temp->next;
            count++;
        }

        count -= n;
        temp = head;

        if(count==0) {
            head = head->next;
            delete(temp);
            return head;
        }

        while(count>1){
            temp = temp->next;
            count--;
        }
        ListNode* curr = temp->next;
        temp->next = curr->next;
        delete(curr);

        return head;
    }
};


// 1 2 3 4 5 6 : 2

// 1 2 3 4 : 2
