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
        if(!head)
            return head;
        int len = 0 ;
        ListNode *start = head;
        while(start){
            len++;
            start = start->next;
        }
        int idx = len - n + 1 ;
        if(idx == 1)
            return head->next;
        
        int i = 1;
        start = head;
        ListNode *prev = nullptr;

        while(start && i < idx){
            prev = start;
            start = start->next;
            i++;
        }
        prev->next = start->next;

        return head;
    }
};
