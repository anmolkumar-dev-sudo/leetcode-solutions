class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        int total=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1)total++;
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    bool ok=true;
                    for(int k=0;k<m;k++){
                        if(k==j)continue;
                        if(grid[i][k]==1){
                            ok=false;
                            break;
                        }
                    }
                    for(int k=0;k<n;k++){
                        if(k==i)continue;
                        if(grid[k][j]==1){
                            ok=false;
                            break;
                        }
                    }
                    if(ok)cnt++;
                }
            }
        }
        return total-cnt;
    }
};