class Solution {
public:
    bool ispal(string &s,int i,int j,vector<vector<int>>&dp){
        if(i>=j)return true;
        if(dp[i][j]!=-1)return dp[i][j];
        if(s[i]!=s[j])return false;
        return dp[i][j]=ispal(s,i+1,j-1,dp);
    }
    string longestPalindrome(string s) {
        int n=s.length();
        int maxi=INT_MIN;
        string a="";
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        for(int i=0;i<n;i++){
            string t="";
            for(int j=i;j<n;j++){
                t+=s[j];
                if(ispal(s,i,j,dp) && maxi<=j-i+1){
                    a=t;
                    maxi=j-i+1;
                }
            }
        }
        return a;
    }
};