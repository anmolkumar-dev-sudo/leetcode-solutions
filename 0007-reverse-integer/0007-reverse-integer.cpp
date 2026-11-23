class Solution {
public:
    long long fun(long long n){
        long long x=0;
        int sign=1;
        if(n<0)sign=-1;
        n=abs(n);
        while(n>0){
            x+=n%10;
            n/=10;
            if(n==0)break;
            x*=10;
        }
        return sign*x;
    }
    int reverse(int x) {
        int ans=0;
        if(fun((long long)x)>INT_MAX || fun((long long)x)<INT_MIN)return 0;
        return ans=fun((long long)x);
    }
};