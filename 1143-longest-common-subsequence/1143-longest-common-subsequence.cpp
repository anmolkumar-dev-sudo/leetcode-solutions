class Solution {
public:
    int fun(string &s1,string &s2,int i,int j,vector<vector<int>>&dp){
        int n=s1.length(),m=s2.length();
        if(i>=n || j>=m)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        if(s1[i]==s2[j])return 1+fun(s1,s2,i+1,j+1,dp);
        return dp[i][j]=max(fun(s1,s2,i+1,j,dp),fun(s1,s2,i,j+1,dp));
    }
    int longestCommonSubsequence(string s1, string s2) {
        int n=s1.length(),m=s2.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return fun(s1,s2,0,0,dp);
    }
};