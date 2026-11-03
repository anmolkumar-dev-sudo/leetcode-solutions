class Solution {
public:
    int minCut(string s){
        int n=s.length();
        vector<vector<bool>>isPal(n,vector<bool>(n,false));

        for(int i=n-1;i>=0;i--){
            for(int j=i;j<n;j++){
                if(s[i]==s[j]){
                    if(j-i<=1)isPal[i][j]=true;
                    else isPal[i][j]=isPal[i+1][j-1];
                }
            }
        }

        vector<int>dp(n+1,INT_MAX);
        dp[n]=0;

        for(int i=n-1;i>=0;i--){
            for(int j=i;j<n;j++){
                if(isPal[i][j]){
                    dp[i]=min(dp[i],1+dp[j+1]);
                }
            }
        }

        return dp[0]-1;
    }
};