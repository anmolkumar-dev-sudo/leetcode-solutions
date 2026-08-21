/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* fun(TreeNode *root,TreeNode* p, TreeNode* q){
        if(root==NULL)return NULL;
        if(root->val<p->val && root->val<q->val){
         return fun(root->right,p,q);
        }
        if(root->val>p->val && root->val>q->val){
           return root->left=fun(root->left,p,q);
        }
        return root;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return fun(root,p,q);
    }
};