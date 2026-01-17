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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* even=head;
        ListNode* odd=head->next;
        ListNode* etemp=even;
        ListNode* otemp=odd;
        while(otemp && otemp->next){
            etemp->next=otemp->next;
            etemp=etemp->next;
            otemp->next=etemp->next;
            otemp=otemp->next;
        }
        etemp->next=odd;
        return head;
    }
};