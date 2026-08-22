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
        ListNode *dummy = new ListNode(-1);
        ListNode *temp = dummy;
        ListNode *a = list1 , *b = list2;
        while(a && b){
            if(a->val > b->val){
                temp->next = b;
                temp = temp->next;
                b = b->next;
            }
            else{
                temp->next = a;
                temp = temp->next;
                a = a->next;
            }
        }
        if(a)
            temp->next = a;
        else
            temp->next = b;

        return dummy->next;
    }
};
