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
    int minimumBeautifulSubstrings(string s) {
        int n=s.length();
        vector<int>dp(n+1,INT_MAX);
        dp[n]=0;
        for(int i=n-1;i>=0;i--){
            string t="";
            for(int j=i;j<n;j++){
                if(s[i]=='0')break;
                t+=s[j];
                if(isDivisibleBy5(t)){
                    if(dp[j+1]!=INT_MAX)dp[i]=min(dp[i],1+dp[j+1]);
                }
            }
        }
        return (dp[0]==INT_MAX)? -1:dp[0];
    }
};