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
    void fun(TreeNode* root, int t,TreeNode* &ans){
        if(root==NULL)return;
        if(root->val==t){
            ans=root;
            return;
        }
        if(t>root->val)fun(root->right,t,ans);
        else fun(root->left,t,ans);
    }
    TreeNode* searchBST(TreeNode* root, int t) {
        TreeNode* ans=NULL;
        fun(root,t,ans);
        return ans;
    }
};