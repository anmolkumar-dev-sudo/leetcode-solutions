class Solution {
public:
    bool fun(vector<int>&nums,int idx,vector<int>&dp){
        if(idx==nums.size()-1)return true;
        if(dp[idx]!=-1)return dp[idx];
        for(int i=1;i<=nums[idx];i++){
            if(fun(nums,idx+i,dp))return dp[idx]=true;
        }
        return dp[idx]=false;
    }
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        return fun(nums,0,dp);
    }
};