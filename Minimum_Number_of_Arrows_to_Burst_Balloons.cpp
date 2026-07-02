class Solution {
public:
    int findMinArrowShots(vector<vector<int>>&v) {
        int n=v.size();
        sort(v.begin(),v.end());
        int p=v[0][0],q=v[0][1];
        int cnt=1;
        for(int i=1;i<n;i++){
            if(v[i][0]>=p && v[i][0]<=q){
                p=v[i][0];
                q=min(q,v[i][1]);
            }
            else{
                cnt++;
                p=v[i][0];
                q=v[i][1];
            }
        }
        return cnt;
    }
};