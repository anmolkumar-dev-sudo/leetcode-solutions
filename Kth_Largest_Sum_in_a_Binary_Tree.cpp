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
    long long kthLargestLevelSum(TreeNode* root, int k){
        queue<TreeNode*>q;
        q.push(root);
        vector<long long>v;
        while(!q.empty()){
            int n=q.size();
            long long sum=0;
            while(n--){
                auto p=q.front();
                sum+=(p->val);
                q.pop();
                if(p->left!=NULL)q.push(p->left);
                if(p->right!=NULL)q.push(p->right);
            }
            v.push_back(sum);
        }
        sort(v.begin(),v.end(),greater<long long>());
        if(k>v.size())return -1;
        return v[k-1];
    }
};