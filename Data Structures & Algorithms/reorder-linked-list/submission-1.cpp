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
    void reorderList(ListNode* head) {
        // needing length in advance?
        ListNode* curr=head;
        ListNode* curr2=head;

        while(curr2 && curr2->next){
            curr = curr->next;
            curr2 = curr2->next->next;
        }
        curr2 = curr->next;
        curr->next = nullptr;

        // reverse the 2nd half of list during iteration
        ListNode* head2 = nullptr;
        while(curr2){
            ListNode* temp = curr2->next;
            curr2->next = head2;
            head2 = curr2;
            curr2 = temp;
        }

        ListNode* head1 = head;
        // // merge the 2 list :: head and head2
        while(head2) {
            ListNode* temp1 = head1->next;
            ListNode* temp2 = head2->next;

            head1->next = head2;
            head2->next = temp1;
            head1 = temp1;
            head2 = temp2;
        }

        
    }
};
// 0 1 2 3 4 5 6
// 0 6 1 5 2 4 3

// 0 1 2 3 4 5
// 0 5 1 4 2 3



