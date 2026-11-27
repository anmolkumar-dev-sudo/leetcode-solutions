class Solution {
public:
    int myAtoi(string s) {
        int n=s.length();
        if(n==0)return 0;
        string t="";
        int sign=1;
        int idx=-1;
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
                idx=i;
                break;
            }
        }
        if(idx==-1)return 0;
        if(s[idx]=='-')sign=-1;
        for(int i=idx;i<n;i++){
            if(i==idx && (s[idx]=='-' || s[idx]=='+'))continue;
            if(s[i]<='9' && s[i]>='0')t+=s[i];
            else break;
        }
        int idx0=0;
        for(int i=0;i<t.length();i++){
            if(s[i]!='0'){
                idx0=i;
                break;
            }
        }
        long long ans=0;
        int j=idx0;
        while(j<t.length()){
            if(sign==-1 && sign*ans<INT_MIN)return INT_MIN;
            if(sign==1 && sign*ans>INT_MAX)return INT_MAX;
            ans*=10;
            ans+=(t[j]-'0');
            j++;
        }
        if(sign*ans<INT_MIN)return INT_MIN;
        if(sign*ans>INT_MAX)return INT_MAX;
        return ans*sign;
    }
};