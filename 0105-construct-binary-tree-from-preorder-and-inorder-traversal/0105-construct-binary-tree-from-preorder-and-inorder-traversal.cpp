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
    TreeNode* banao(vector<int>& preorder,int preStart,int preEnd, vector<int>& inorder,int inStart,int inEnd,map<int,int>& mapp){
        if(preStart>preEnd||inStart>inEnd) return NULL;
        TreeNode* root=new TreeNode(preorder[preStart]);
        int inRoot=mapp[root->val];
        int numslef=inRoot-inStart;
        root->left=banao(preorder,preStart+1,preStart+numslef,inorder,inStart,inRoot-1,mapp);
        root->right=banao(preorder,preStart+numslef+1,preEnd,inorder,inRoot+1,inEnd,mapp);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int ,int> mapp;
        for(int i=0;i<inorder.size();i++) mapp[inorder[i]]=i;
        TreeNode* root=banao(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,mapp);
        return root;
    }
};