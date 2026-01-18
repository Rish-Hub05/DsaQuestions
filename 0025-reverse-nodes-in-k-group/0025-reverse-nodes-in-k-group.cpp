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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL|| head->next==NULL || k==1) return head;
        int n=0;
        ListNode* temp=head;
        while(temp){
            n++;
            temp=temp->next;
        }
        int x=k;
        ListNode* dum=new ListNode(0);
        dum->next=head;
        ListNode* temp1=dum;
        for(int i=0;i<n/k;i++){
            ListNode* prev=temp1;
            ListNode* curr=temp1->next;
            ListNode* next=curr;
            for(int j=0;j<k;j++){
                next=curr->next;
                curr->next=prev;
                prev=curr;
                curr=next;
            }
            ListNode* t2=temp1->next;
            temp1->next->next=next;
            temp1->next=prev;
            temp1=t2;
        }
        return dum->next;
    }
};