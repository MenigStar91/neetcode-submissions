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

    ListNode* reverse(ListNode* head){
        ListNode* curr = nullptr;
        while(head){
            ListNode* temp = head->next;
            head->next = curr;
            curr = head;
            head = temp;
        }

        return curr;
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;

        ListNode *a = l1;
        ListNode *b = l2;

        ListNode *head = nullptr;
        ListNode *curr = nullptr;
        while(a && b){
            int s = carry + a->val + b->val;
            carry = s/10;
            ListNode *temp = new ListNode(s%10);

            a = a->next;
            b = b->next;

            temp->next = head;
            head = temp;
        }

        if(b!=nullptr){
            while(b){
                int s = carry + b->val;
                carry = s/10;
                ListNode *temp = new ListNode(s%10);
                b = b->next;
                temp->next = head;
                head = temp;
            }
        }
        if(a!=nullptr){
            while(a){
                int s = carry + a->val;
                carry = s/10;
                ListNode *temp = new ListNode(s%10);
                a = a->next;
                temp->next = head;
                head = temp;
            }
        }

        if((carry!=0) && (a==nullptr && b==nullptr)){
            ListNode* temp = new ListNode(carry);
            temp->next = head;
            head = temp;
        }

        return reverse(head);
    }
};
