class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c==2 || c==1 || c==0)return true;
        bool ans=false;
        for(long long i=0;i<100000;i++){
            long long a=i*i;
            long long f=0,e=1e9;
            long long z=(long long)c;
            while(f<=e){
                long long mid=f+(e-f)/2;
                if(z-mid*mid==a){
                    ans=true;
                    break;
                }
                else if(z-mid*mid<a){
                    e=mid-1;
                }
                else f=mid+1;
            }
            if(ans==true)break;
        }
        return ans;
    }
};