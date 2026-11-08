class Solution {
public:
    int countServers(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
        int sz=0;
        int sum=0;
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=0;j<m;j++){
                if(mat[i][j]==1)cnt++;
            }
            if(cnt!=1)sum+=cnt;
        }
        for(int i=0;i<n;i++){
            int cmp=0;
            int a=-1,b=-1;
            for(int j=0;j<m;j++){
                if(mat[i][j]==1){
                    cmp++;
                    a=i,b=j;
                }
            }
            if(cmp==1){
                bool ok=false;
                for(int i=0;i<n;i++){
                    int j=b;
                    if(mat[i][j]==1 && i!=a){
                        sz++,ok=true;
                        break;
                    }
                }
                if(!ok){
                    for(int j=0;j<m;j++){
                    int i=a;
                    if(mat[i][j]==1 && j!=b)sz++;
                }
                }
            }
        }
        return sum+sz;
    }
};