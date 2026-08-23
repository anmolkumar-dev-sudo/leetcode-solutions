class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
        int top=0,right=m-1,left=0,down=n-1;
        vector<int>ans;
        while(top<=down && left<=right){
            if(top>down || left>right)break;
            for(int i=top;i<=right;i++){
                ans.push_back(mat[top][i]);
            }
            top++;
            if(top>down || left>right)break;
            for(int i=top;i<=down;i++){
                ans.push_back(mat[i][right]);
            }
            right--;
            if(top>down || left>right)break;
            for(int i=right;i>=left;i--){
                ans.push_back(mat[down][i]);
            }
            down--;
            if(top>down || left>right)break;
            for(int i=down;i>=top;i--){
                ans.push_back(mat[i][left]);
            }
            left++;
        }
        return ans;
    }
};