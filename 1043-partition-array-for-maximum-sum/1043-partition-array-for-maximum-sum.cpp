class Solution {
public:
    int fun(vector<int>&arr,int k,int idx,vector<int>&dp){
        int n=arr.size();
        int res=0,currmax=-1;
        if(idx==n)return 0;
        if(dp[idx]!=-1)return dp[idx];
        for(int j=idx;j<n && abs(idx-j)+1<=k;j++){
            currmax=max(currmax,arr[j]);
            dp[idx]=max(dp[idx],(abs(idx-j)+1)*currmax+fun(arr,k,j+1,dp));
        }
        return dp[idx];
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int>dp(n+1,-1);
        return fun(arr,k,0,dp);
    }
};