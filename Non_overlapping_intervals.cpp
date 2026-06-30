class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>&v) {
        int n=v.size();
        sort(v.begin(),v.end());
        int cnt=0;
        int curr=v[0][1];
        for(int i=1;i<n;i++){
            if(curr>v[i][0]){
                cnt++;
                curr=min(curr,v[i][1]);
            }
            else{
                curr=v[i][1];
            }
        }
        return cnt;
    }
};