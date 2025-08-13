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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        queue<TreeNode*> nod;
        nod.push(root);
        int left=1;
        while(!nod.empty()){
            int size=nod.size();
            vector<int> row(size);
            for(int i=0;i<size;i++){
                TreeNode* node=nod.front();
                nod.pop();
                int index=left?i:(size-1-i);
                row[index]=node->val;
                if(node->left) nod.push(node->left);
                if(node->right) nod.push(node->right);
            }
            left=!left;
            ans.push_back(row);
        }

                return ans;
    }
};