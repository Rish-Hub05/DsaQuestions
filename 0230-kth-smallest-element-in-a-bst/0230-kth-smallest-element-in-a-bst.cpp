/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    void inorder(TreeNode* root, int& k,int& c,int& minu){
        if(!root|| c>=k)return ;
        inorder(root->left,k,c,minu);
        c++;
        if(c==k){
            minu=root->val;
            return;
        }
        inorder(root->right,k,c,minu);
    }
    int fun(TreeNode* root, int k){
        int minu=INT_MIN;
        int c=0;
        inorder(root,k,c,minu);
        return minu;
    }
    int kthSmallest(TreeNode* root, int k) {
        int ans=fun(root,k);
        return ans;
        
    }
};