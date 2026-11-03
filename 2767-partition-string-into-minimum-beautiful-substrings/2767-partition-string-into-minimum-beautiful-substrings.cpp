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
    int fun(string &s,int i){
        int n=s.length();
        if(i==n)return 0;
        string t="";
        int mini=INT_MAX;
        for(int j=i;j<n;j++){
            if(s[i]=='0')continue;
            t+=s[j];
            if(isDivisibleBy5(t)){
                int ans=fun(s,j+1);
                if(ans!=INT_MAX)mini=min(mini,1+ans);
            }
        }
        return mini;
    }
    int minimumBeautifulSubstrings(string s) {
        return (fun(s,0)==INT_MAX)? -1:fun(s,0);
    }
};