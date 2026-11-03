class Solution {
public:
    bool isDivisibleBy5(string &s){
        long long n=stoll(s,nullptr,2);
        while(n%5==0){
            n/=5;
        }
        if(n==1)return true;
        return false;
    }
    int fun(string &s,int i,vector<int>&dp){
        int n=s.length();
        if(i==n)return 0;
        string t="";
        if(dp[i]!=INT_MAX)return dp[i];
        for(int j=i;j<n;j++){
            if(s[i]=='0')continue;
            t+=s[j];
            if(isDivisibleBy5(t)){
                int ans=fun(s,j+1,dp);
                if(ans!=INT_MAX)dp[i]=min(dp[i],1+ans);
            }
        }
        return dp[i];
    }
    int minimumBeautifulSubstrings(string s) {
        int n=s.length();
        vector<int>dp(n+1,INT_MAX);
        int ans=fun(s,0,dp);
        return (ans==INT_MAX)? -1:ans;
    }
};