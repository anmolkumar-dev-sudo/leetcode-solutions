class Solution {
public:
    int maximumBags(vector<int>& c, vector<int>& r, int extra) {
        int n=c.size();
        long long diff=0;
        for(int i=0;i<n;i++){
            diff+=(c[i]-r[i]);
            c[i]=(c[i]-r[i]);
        }
        if(extra>=diff)return n;
        sort(c.begin(),c.end());
        int cnt=0;
        for(int i=0;i<n;i++){
            if(extra-c[i]>=0 || c[i]==0){
                extra-=c[i];
                cnt++;
            }
        }
        return cnt;
    }
};