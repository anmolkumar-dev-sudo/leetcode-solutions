class Solution {
public:
    int maxSubarraySumCircular(vector<int>& v) {
        int n=v.size();
        int maxi=INT_MIN,sum=0;
        for(int i=0;i<n;i++){
            sum+=v[i];
        }
        int mini=INT_MAX,sum2=0;
        for(int i=0;i<n;i++){
            sum2=min(v[i],sum2+v[i]); // most cooked problem :(....no intuation
            mini=min(sum2,mini)
        }
        int maxi2=INT_MIN,sum3=0;
        for(int i=0;i<n;i++){
            sum3=max(v[i],sum3+v[i]);
            maxi2=max(sum3,maxi2);
        }
        if(maxi2 < 0)
        return maxi2;
        return max(maxi2,sum-mini);
    }
};