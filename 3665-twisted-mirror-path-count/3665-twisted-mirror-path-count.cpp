class Solution {
public:
    int dfs(vector<vector<int>>& grid,int i,int j,bool d,vector<vector<vector<int>>>&dp){
        int n=grid.size(),m=grid[0].size();
        if(i==n-1 && j==m-1)return 1;
        if(i<0 || i>=n || j<0 || j>=m)return 0;
        if(dp[i][j][d]!=-1)return dp[i][j][d];
        int right=0,down=0;
        if(grid[i][j]==1){
            if(d)return dp[i][j][d]=dfs(grid,i+1,j,!d,dp);
            return dp[i][j][d]=dfs(grid,i,j+1,!d,dp);
        }
        else{
            down=dfs(grid,i+1,j,false,dp);
            right=dfs(grid,i,j+1,true,dp);
        }
        return dp[i][j][d]=(down+right)%1000000007;
    }
    int uniquePaths(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(m+1,vector<int>(2,-1)));
        return dfs(grid,0,0,true,dp);
    }
};