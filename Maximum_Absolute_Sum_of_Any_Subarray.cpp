class Solution {
public:
    int maxAbsoluteSum(vector<int>& v) {
        int n=v.size();
        int maxi=INT_MIN,sum=0;
        for(int i=0;i<n;i++){
            sum=max(v[i],(v[i]+sum));
            maxi=max(maxi,sum);
        }
        int maxi2=INT_MAX,sum2=0;
        for(int i=0;i<n;i++){
            sum2=min(v[i],(v[i]+sum2));
            maxi2=min(maxi2,sum2);
        }
        return max(abs(maxi),abs(maxi2));
    }
};