class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>maxi(n),mini(n);
        int a=INT_MIN,b=INT_MAX;
        for(int i=0;i<n;i++){
            a=max(a,nums[i]);
            maxi[i]=a;
        }
        for(int i=n-1;i>=0;i--){
            b=min(b,nums[i]);
            mini[i]=b;
        }
        for(int i=0;i<n;i++){
            if(maxi[i]-mini[i]<=k){
                return i;
            }
        }
        return -1;
    }
};