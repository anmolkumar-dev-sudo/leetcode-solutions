class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int f=0,e=1e9,ans=-1;
        while(f<=e){
            int mid=f+(e-f)/2;
            int cnt=0,sum=0;
            bool ok=false;
            for(int i=0;i<n;i++){
                if(weights[i]>mid){
                    ok=true;
                    break;
                }
                if(sum+weights[i]>mid){
                    sum=0;
                    cnt++;
                }
                sum+=weights[i];
            }
            if(ok || cnt+1>days){
                f=mid+1;
            }
            else if(cnt+1<=days){
                ans=mid;
                e=mid-1;
            }
        }
        return ans;
    }
};