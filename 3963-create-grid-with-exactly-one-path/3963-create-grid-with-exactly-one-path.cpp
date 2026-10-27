class Solution {
public:
    vector<string> createGrid(int n, int m) {
        vector<string>ans;
        for(int i=0;i<n;i++){
            string s="";
            for(int j=0;j<m;j++){
                if(i==0 || j==m-1){
                    s+='.';
                    continue;
                }
                else{
                    s+='#';
                }
            }
            ans.push_back(s);
        }
        return ans;
    }
};