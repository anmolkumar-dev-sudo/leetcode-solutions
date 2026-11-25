class Solution {
public:
    int smallestDivisor(vector<int>& nums, int t) {
        int n=nums.size();
        int f=1,e=1e6;
        int ans=-1;
        while(f<=e){
            int mid=f+(e-f)/2;
            int sum=0;
            for(int i=0;i<n;i++){
                sum+=(nums[i]+mid-1)/mid;
            }
            if(sum<=t){
                ans=mid;
                e=mid-1;
            }
            else f=mid+1;
        }
        return ans;
    }
};