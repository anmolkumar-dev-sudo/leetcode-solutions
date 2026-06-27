class Solution {
public:
    void fun(TreeNode* root,int t,vector<vector<int>>&ans,vector<int>&temp,int sum){
        if(root==NULL)return;
        if(root->left==NULL && root->right==NULL){
            sum+=root->val;
            if(sum==t){
            temp.push_back(root->val);
            ans.push_back(temp);
            temp.pop_back();
            }
            return;
        }
        temp.push_back(root->val);
        fun(root->left,t,ans,temp,sum+root->val);
        fun(root->right,t,ans,temp,sum+root->val);
        temp.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int t) {
        vector<vector<int>>ans;
        vector<int>temp;
        fun(root,t,ans,temp,0);
        return ans;
    }
};