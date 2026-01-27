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
map<int,map<int,vector<int>>> order;
    void fun(TreeNode* root,int col,int row){
        if(root==NULL) return;
        order[row][col].push_back(root->val);
        fun(root->left,col+1,row-1);
        fun(root->right,col+1,row+1);

    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        fun(root,0,0);
        vector<vector<int>> ans;
        for(auto &it:order){
            vector<int> col;
            for(auto &r:it.second){
                sort(r.second.begin(),r.second.end());
                for(int v:r.second)
                    col.push_back(v);
            }
        ans.push_back(col);
        }
        return ans;
    }
};