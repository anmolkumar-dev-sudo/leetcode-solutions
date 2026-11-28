class Solution {
public:
    int fun(vector<int>& nums,int idx,vector<int>&dp){
        if(idx==nums.size()-1)return 0;
        if(dp[idx]!=-1)return dp[idx];
        int minJumps=1e9;
        for(int i=1;i<=nums[idx];i++){
            if(idx+i<nums.size()){
                minJumps=min(minJumps,1+fun(nums,idx+i,dp));
            }
        }
        return dp[idx]=minJumps;
    }
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,1e9);
        dp[n-1]=0;
        for(int idx=n-2;idx>=0;idx--){
            int minJumps=1e9;
            for(int i=1;i<=nums[idx];i++){
                if(idx+i<n){
                    minJumps=min(minJumps,1+dp[idx+i]);
                }
            }
            dp[idx]=minJumps;
        }
        return dp[0];
    }
};