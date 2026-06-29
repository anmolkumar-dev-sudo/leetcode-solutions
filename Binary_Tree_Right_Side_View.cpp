class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        if(root==NULL)return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            TreeNode* p=NULL;
            while(n--){
                p=q.front();
                q.pop();
                if(p->left!=NULL)q.push(p->left);
                if(p->right!=NULL)q.push(p->right);
            }
            ans.push_back(p->val);
        }
        return ans;
    }
};