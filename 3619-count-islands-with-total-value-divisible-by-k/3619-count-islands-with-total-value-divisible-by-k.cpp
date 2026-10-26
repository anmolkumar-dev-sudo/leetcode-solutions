#define ll long long
class Solution {
public:
    void dfs(vector<vector<int>>& grid,int k,int i,int j,ll &sum){
        int n=grid.size(),m=grid[0].size();
        if(i>=n || i<0 || j<0 || j>=m || grid[i][j]==0)return;
        sum+=grid[i][j];
        grid[i][j]=0;
        dfs(grid,k,i+1,j,sum);
        dfs(grid,k,i-1,j,sum);
        dfs(grid,k,i,j+1,sum);
        dfs(grid,k,i,j-1,sum);
    }
    int countIslands(vector<vector<int>>& grid, int k) {
       int n=grid.size(),m=grid[0].size(); 
       int cnt=0;
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
                ll sum=0;
                if(grid[i][j]!=0){
                    dfs(grid,k,i,j,sum);
                    if(sum%k==0)cnt++;
                }
           } 
       }
       return cnt;
    }
};