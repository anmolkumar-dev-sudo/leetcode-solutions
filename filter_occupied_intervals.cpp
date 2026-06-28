class Solution {
public:
    void fun(vector<vector<int>>&mat,vector<vector<int>>&ans){
    int n=mat.size();
    vector<int>curr;
    sort(mat.begin(),mat.end());
    curr.push_back(mat[0][0]);
    curr.push_back(mat[0][1]);
    for(int i=1;i<n;i++){
        if(curr[1] +1 >= mat[i][0]){
            curr[1]=max(curr[1],mat[i][1]);
        }
        else{
            ans.push_back(curr);
            curr=mat[i];
        }
    } 
    ans.push_back(curr);
}
void funo(vector<vector<int>>&ans,vector<vector<int>>&out,int f,int e){
    int n=ans.size();
    for(int i=0;i<n;i++){
        if(f>ans[i][1] || e<ans[i][0]){
            out.push_back(ans[i]);
            continue;
        }
        if(ans[i][0]>f && ans[i][1]<e)continue;
        if(ans[i][0]<f){
            out.push_back({ans[i][0],f-1});
        }
        if(ans[i][1]>e){
            out.push_back({e+1,ans[i][1]});
        }
    }
}
    vector<vector<int>>filterOccupiedIntervals(vector<vector<int>>& mat,int f,int e){
        vector<vector<int>>ans;
        vector<vector<int>>out;
        fun(mat,ans);
        funo(ans,out,f,e);
        return out;
    }
};