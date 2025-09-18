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
    ListNode* mergeNodes(ListNode* head) {
        if(head==NULL) return 0;
        vector<int> ans;
        ListNode* temp=head->next;
        int sum=0;
        while(temp!=NULL){
            
            if(temp->val==0){
                ans.push_back(sum);
                sum=0;
            }else
            sum+=temp->val;
            temp=temp->next;
        }
        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;

        for (int val : ans) {
            curr->next = new ListNode(val);
            curr = curr->next;
        }

        return dummy->next;

    }
};