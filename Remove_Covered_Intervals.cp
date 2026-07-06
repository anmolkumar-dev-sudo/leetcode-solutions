class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& mat){
        int n=mat.size();
        int cnt=0;
        sort(mat.begin(),mat.end());
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if( i!=j && mat[i][0]>=mat[j][0] && mat[i][1]<=mat[j][1]){
                    cnt++;
                    break;
                }
            }
        }
        return n-cnt;
    }
};
