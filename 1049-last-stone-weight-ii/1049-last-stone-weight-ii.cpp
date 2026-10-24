class Solution {
public:
    int fun(vector<int>&nums,int sumA,int sumB,int idx,vector<vector<int>>&dp){
        int n=nums.size();
        if(idx==n)return abs(sumA-sumB);
        if(dp[sumA][idx]!=-1)return dp[sumA][idx];
        int takeA=fun(nums,sumA+nums[idx],sumB,idx+1,dp);
        int takeB=fun(nums,sumA,sumB+nums[idx],idx+1,dp);
        return dp[sumA][idx]=min(takeA,takeB);
    }
    int lastStoneWeightII(vector<int>&nums){
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)sum+=nums[i];
        vector<vector<int>>dp(sum+1,vector<int>(n+1,-1));
        return fun(nums,0,0,0,dp);
    }
};