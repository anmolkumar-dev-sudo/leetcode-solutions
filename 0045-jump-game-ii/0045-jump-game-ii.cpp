class Solution {
public:
    int jump(vector<int>&nums,int idx,vector<int>&dp){
        if(idx>=nums.size()-1)return 0;
        int mini=INT_MAX;
        if(dp[idx]!=-1)return dp[idx];
        for(int i=1;i<=nums[idx];i++){
            int a=jump(nums,idx+i,dp);
            if(a!=INT_MAX)mini=min(mini,1+a);
        }
        return dp[idx]=mini;
    }
    int jump(vector<int>& nums) {
        vector<int>dp(nums.size()+1,-1);
        return jump(nums,0,dp);
    }
};