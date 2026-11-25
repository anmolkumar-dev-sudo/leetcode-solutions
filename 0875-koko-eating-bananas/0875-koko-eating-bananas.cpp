class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int f=1,e=1e9;
        int ans=-1;
        while(f<=e){
            long long mid=f+(e-f)/2;
            long long b=0;
            for(int i=0;i<n;i++){
                b+=(piles[i]+mid-1)/mid;
            }
            if(b<=h){
                ans=mid;
                e=mid-1;
            }
            else f=mid+1;
        }
        return ans;
    }
};