class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,0);
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