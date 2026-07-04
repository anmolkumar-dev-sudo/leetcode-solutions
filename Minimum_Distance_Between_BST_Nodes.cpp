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
class Solution{
public:
    void fun(TreeNode* root,int &ans,int &prev,int &c){
        if(root==NULL)return;
        fun(root->left,ans,prev,c);
        if(c!=0)ans=min(ans,abs(prev-root->val));
        prev=root->val;
        c++;
        fun(root->right,ans,prev,c);
    }
    int minDiffInBST(TreeNode* root) {
        int ans=INT_MAX,prev=0,c=0;
        fun(root,ans,prev,c);
        return ans;
    }
};