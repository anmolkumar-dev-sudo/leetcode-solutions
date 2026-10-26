#define ll long long
class Solution {
public:
    void dfs(vector<vector<int>>& grid,int k,int i,int j,vector<vector<bool>>&vis,ll &sum){
        int n=grid.size(),m=grid[0].size();
        if(i>=n || i<0 || j<0 || j>=m || vis[i][j]==true || grid[i][j]==0)return;
        vis[i][j]=true;
        sum+=grid[i][j];
        dfs(grid,k,i+1,j,vis,sum);
        dfs(grid,k,i-1,j,vis,sum);
        dfs(grid,k,i,j+1,vis,sum);
        dfs(grid,k,i,j-1,vis,sum);
    }
    int countIslands(vector<vector<int>>& grid, int k) {
       int n=grid.size(),m=grid[0].size(); 
       vector<vector<bool>>vis(n,vector<bool>(m,false));
       int cnt=0;
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
                ll sum=0;
                if(!vis[i][j] && grid[i][j]!=0){
                    dfs(grid,k,i,j,vis,sum);
                    if(sum%k==0)cnt++;
                }
           } 
       }
       return cnt;
    }
};