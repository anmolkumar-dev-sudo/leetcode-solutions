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
    void fun(TreeNode* root,int pos,int &l,int &r){
        if(root==NULL)return;
        l=min(l,pos);
        r=max(r,pos);
        fun(root->left,pos-1,l,r);
        fun(root->right,pos+1,l,r);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        int l=INT_MAX,r=INT_MIN;
        fun(root,0,l,r);
        vector<vector<int>>ans(r-l+1,vector<int>());
        if(root==NULL)return ans;
        queue<pair<TreeNode*,int>>q;
        q.push({root,abs(l)});
        //applying bfs -- 
        vector<int>start(r-l+1);
        while(!q.empty()){
            for(int i=0;i<ans.size();i++){
                start[i]=ans[i].size();
            }
            int sz=q.size();
            while(sz--){
                TreeNode* temp=q.front().first;
                int idx=q.front().second;
                q.pop();
                ans[idx].push_back(temp->val);
                if(temp->left!=NULL){
                    q.push({temp->left,idx-1});
                }
                if(temp->right!=NULL){
                    q.push({temp->right,idx+1});
                }
            }
            for(int i=0;i<ans.size();i++){
            sort(ans[i].begin()+start[i],ans[i].end());
        }
        }
        return ans;

    }
};