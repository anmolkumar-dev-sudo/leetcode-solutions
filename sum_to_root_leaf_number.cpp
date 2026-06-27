class Solution {
public:
    void fun(TreeNode* root,vector<string>&ans,string &s){
        int l=s.length();
        if(root==NULL)return;
        if(root->left==NULL && root->right==NULL){
            s+=to_string(root->val);
            ans.push_back(s);
            return;
        }
        s+=(to_string(root->val));
        fun(root->left,ans,s);
        s.resize(l);
        s+=(to_string(root->val));
        fun(root->right,ans,s);
        s.resize(l);
    }
    int sumNumbers(TreeNode* root) {
        vector<string>ans;
        string s="";
        fun(root,ans,s);
        int sum=0;
        for(int i=0;i<ans.size();i++){
            sum+=stoi(ans[i]);
        }
        return sum;
    }
};