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
    ListNode* merge(ListNode* left,ListNode* right){
        if(left==NULL) return right;
        if(right==NULL) return left;
        ListNode* head;
        if(left->val<=right->val){
            head=left;
            left=left->next;
        }
        else{
            head=right;
            right=right->next;
        }
        ListNode* curr=head;
        while(left!=NULL && right!=NULL){
            if(left->val<=right->val){
                curr->next=left;
                left=left->next;
            }
            else{
                curr->next=right;
                right=right->next;
            }
            curr=curr->next;
        }
        if(left!=NULL) curr->next=left;
        if(right!=NULL) curr->next=right;
        return head;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==nullptr) return head;
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* prev=NULL;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            prev=slow;
            slow=slow->next;
        }
        ListNode* mid=prev;
        ListNode* h2=mid->next;
        mid->next=NULL;
        ListNode* left=sortList(head);
        ListNode* right=sortList(h2);
        return merge(left,right);
    }
};