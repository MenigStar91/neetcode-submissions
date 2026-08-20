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
        int count = 0;

        while(curr){
            curr = curr->next;
            count++;
        }

        curr=head;
        for(int i=1;i<(count+1)/2;i++){
            curr = curr->next;
        } 
        // reverse the 2nd half of list during iteration
            
        ListNode* curr2 = curr->next;
        curr->next = nullptr;

        ListNode* head2 = nullptr;
        while(curr2){
            ListNode* temp = curr2->next;
            curr2->next = head2;
            head2 = curr2;
            curr2 = temp;
        }

        ListNode* head1 = head;
        // // merge the 2 list :: head and head2
        for (int i = 0; i < count; i++) {
            if (i % 2 == 0) {
                ListNode* temp = head1->next;
                head1->next = head2;
                head1 = temp;
            } else {
                ListNode* temp = head2->next;
                head2->next = head1;
                head2 = temp;
            }
        }

        
    }
};
// 0 1 2 3 4 5 6
// 0 6 1 5 2 4 3

// 0 1 2 3 4 5
// 0 5 1 4 2 3



