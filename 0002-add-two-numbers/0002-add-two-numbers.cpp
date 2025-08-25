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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t=new ListNode();
        ListNode* res=t;
        int c=0,total=0;
        while(l1||l2||c){
            total=c;
            if(l1)
            {
                total+=l1->val;
                l1=l1->next;
            }
            if(l2){
                total+=l2->val;
                l2=l2->next;
            }
            int num=total%10;
            c=total/10;
            t->next=new ListNode(num);
            t=t->next;
        }
        ListNode* ans=res->next;
        delete res;
        return ans;
        
    }
};