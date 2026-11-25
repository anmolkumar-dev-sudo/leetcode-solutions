class Solution {
public:
    int mySqrt(int x) {
        int f=0,e=1e9;
        int ans=-1;
        while(f<=e){
            long long mid=f+(e-f)/2;
            if(mid*mid<=x){
                ans=mid;
                f=mid+1;
            }
            else e=mid-1;
        }
        return ans;
    }
};