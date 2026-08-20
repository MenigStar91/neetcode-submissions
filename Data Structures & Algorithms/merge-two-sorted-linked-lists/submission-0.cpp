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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1) return list2;
        if(!list2) return list1;

        ListNode* curr = (list1->val < list2->val) ? list1 : list2;

        ListNode* newList = curr;
        if(curr == list1) list1 = list1->next;
        if(curr == list2) list2 = list2->next;
        while(list1 && list2){
            curr->next = (list1->val < list2->val) ? list1 : list2;
            if(curr->next == list1) list1 = list1->next;
            if(curr->next == list2) list2 = list2->next;
            curr = curr->next;
        }
        
        if(list1==nullptr){
            curr->next = list2;
        }

        if(list2==nullptr){
            curr->next = list1;
        }

        return newList;
    }
};
