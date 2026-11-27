class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        int fc=0;
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
                else if(grid[i][j]==1)fc++;
            }
        }
        if(fc==0)return 0;
        int time=0;
        int dc[4]={1,-1,0,0};
        int dr[4]={0,0,1,-1};
        while(!q.empty()){
            int sz=q.size();
            while(sz--){
                auto [r,c]=q.front();
                q.pop();
                for(int k=0;k<4;k++){
                    int row=dr[k]+r;
                    int col=dc[k]+c;
                    if(row<n && col<m && row>=0 && col>=0 && grid[row][col]==1){
                        grid[row][col]=2;
                        q.push({row,col});
                        fc--;
                    }
                }
            }
            time++;
        }
        if(fc==0)return time-1;
        return -1;
    }
};