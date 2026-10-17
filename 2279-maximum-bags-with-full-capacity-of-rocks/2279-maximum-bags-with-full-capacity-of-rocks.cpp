class Solution {
public:
    int maximumBags(vector<int>& c, vector<int>& r, int extra) {
        int n=c.size();
        long long diff=0;
        vector<int>ans;
        for(int i=0;i<n;i++){
            diff+=(c[i]-r[i]);
            ans.push_back(c[i]-r[i]);
        }
        if(extra>=diff)return n;
        sort(ans.begin(),ans.end());
        int cnt=0;
        for(int i=0;i<ans.size();i++){
            if(extra-ans[i]>=0 || ans[i]==0){
                extra-=ans[i];
                cnt++;
            }
        }
        return cnt;
    }
};