class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>&mat) {
        int n=mat.size();
        vector<pair<int,int>>st;
        for(int i=0;i<n;i++){
            st.push_back({mat[i][0],i});
        }
        sort(st.begin(),st.end());
        vector<int>v;
        for(int i=0;i<n;i++){
            int x=mat[i][1];
            int f=0,e=n-1,ans=-1;
            while(f<=e){
                int mid=f+(e-f)/2;
                if(st[mid].first>=x){
                    ans=st[mid].second;
                    e=mid-1;
                }
                else f=mid+1;
            }
            v.push_back(ans);
        }
        return v;
    }
};