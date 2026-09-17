class Solution {
public:
    void fun(vector<string>&ans,int n,string s,int open,int close){
        if(s.length()==2*n){
            ans.push_back(s);
            return;
        }
         if(open<n)fun(ans,n,s+'(',open+1,close);
         if(s.length()!=0 && close<open)fun(ans,n,s+')',open,close+1);
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string s="";
        fun(ans,n,s,0,0);
        return ans;
    }
};