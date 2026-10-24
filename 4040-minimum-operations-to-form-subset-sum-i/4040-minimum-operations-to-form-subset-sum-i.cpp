class Solution {
public:
    vector<unordered_map<long long,long long>> costs;
    unordered_map<long long,long long>generate(long long x,long long sum){
        unordered_map<long long,long long>ans;
        long long temp=x,ops=0,mini=INT_MAX;
        while(temp<=sum){
            ans[temp]=ops;
            temp*=2;
            ops++;
        }
        ops=0;
        while(x>0){
            ans[x]=ops;
            x/=2;
            ops++;
        }
        return ans;
    }
    long long fun(vector<int>& nums,int RemSum,int idx,vector<vector<long long>>&dp){
        long long n=nums.size();
        if(RemSum==0)return 0;
        if(idx==n)return INT_MAX;
        if(dp[RemSum][idx]!=-1)return dp[RemSum][idx];
        long long skip=fun(nums,RemSum,idx+1,dp);
        dp[RemSum][idx]=skip;
        for(auto &[val,ops]:costs[idx]){
            if(val>RemSum)continue;
            long long next=fun(nums,RemSum-val,idx+1,dp);
            if(next!=INT_MAX)dp[RemSum][idx]=min(dp[RemSum][idx],ops+next);
        }
        return dp[RemSum][idx];
    }
    int minOperations(vector<int>& nums, int sum) {
        long long n=nums.size();
        costs.resize(n);
        for(int i=0;i<n;i++)costs[i]=generate(nums[i],sum);
        vector<vector<long long>>dp(sum+1,vector<long long>(n+1,-1));
        return ((int)fun(nums,sum,0,dp)==INT_MAX)? -1:(int)fun(nums,sum,0,dp);
    }
};