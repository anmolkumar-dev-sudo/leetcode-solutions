class Solution{
public:
    int climbStairs(int n,vector<int>& costs){
        vector<int> dp(n+1,INT_MAX/2);
        dp[n]=0;
        for(int i=n-1;i>=0;i--){
            int step1=costs[i]+1+dp[i+1];
            int step2=INT_MAX,step3=INT_MAX;
            if(i+2<=n)
                step2=costs[i+1]+4+dp[i+2];
            if(i+3<=n)
                step3=costs[i+2]+9+dp[i+3];
            dp[i]=min({step1,step2,step3});
        }
        return dp[0];
    }
};