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
    TreeNode* fun(TreeNode* root, int val)
    {
        if(root==NULL) return NULL;
        if(root->val==val) return root;
        if(root->val>val) return fun(root->left,val);
        else 
        return fun(root->right,val);
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* newRoot=fun(root,val);
        return newRoot;
    }
};