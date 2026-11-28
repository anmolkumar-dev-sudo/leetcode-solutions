class Solution {
public:
    string convert(string s, int r) {
        int n=s.length();
        if(r==1)return s;
        vector<vector<char>>ans(r,vector<char>(n,'#'));
        int i=0,j=0;
        int idx=0;
        while(idx<n){
            while(i<r){
                if(idx>=n)break;
                ans[i][j]=s[idx];
                idx++;
                i++;
            }
            i=r-1;
            while(i>0){
                i--;
                j++;
                if(i<=0)break;
                if(j>=n)break;
                if(idx>=n)break;
                ans[i][j]=s[idx];
                idx++;
            }
        }
        string t="";
        for(int i=0;i<r;i++){
            for(int j=0;j<n;j++){
                if(ans[i][j]=='#')continue;
                t+=ans[i][j];
            }
        }
        return t;
    }
};