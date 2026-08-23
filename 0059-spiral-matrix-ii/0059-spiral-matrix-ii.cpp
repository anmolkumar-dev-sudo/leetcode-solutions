class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n,vector<int>(n,0));
        int top=0,down=n-1,left=0,right=n-1;
        int c=1;
        while(top<=down && left<=right){
            if(top>down || left>right)break;
            for(int i=left;i<=right;i++){
                ans[top][i]=c;
                c++;
            }
            top++;
            if(top>down || left>right)break;
            for(int i=top;i<=down;i++){
                ans[i][right]=c;
                c++;
            }
            right--;
            if(top>down || left>right)break;
            for(int i=right;i>=left;i--){
                ans[down][i]=c;
                c++;
            }
            down--;
            if(top>down || left>right)break;
            for(int i=down;i>=top;i--){
                ans[i][left]=c;
                c++;
            }
            left++;
        }
        return ans;
    }
};