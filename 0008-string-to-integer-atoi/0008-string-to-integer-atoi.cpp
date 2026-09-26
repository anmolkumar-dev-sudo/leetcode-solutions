class Solution {
public:
    int intlen(long long n){
        int x=0;
        while(n>0){
            n/=10;
            x++;
        }
    return x;
    }
    int myAtoi(string s) {
        int n=s.length();
        long long num=0;
        int sign=1;
        int k=0;
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
                k=i;
                break;
            }
        }
        if(s[k]=='-'){
            sign=-1;
            k++;
        }
        else if(s[k]=='+')k++;
        for(int i=k;i<n;i++){
            if((int)s[i]>=48 && (int)s[i]<=58){
                num=(long long)num*10+(s[i]-'0');
            }
            else break;
            if(intlen(num)>11)break;
        }
        num=num*sign;
        if(num>(long long)INT_MAX-1)num=(long long)INT_MAX;
        else if(num<=(long long)INT_MIN)num=(long long)INT_MIN;
        return num;
    }
};