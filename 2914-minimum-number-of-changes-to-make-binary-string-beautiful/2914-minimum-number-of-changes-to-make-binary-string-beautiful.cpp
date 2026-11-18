class Solution {
public:
    int minChanges(string s) {
        int n=s.length();
        int cnt=0;
        bool ok=true;
        int x=1;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1])x++;
            else{
                if(x%2==1){
                    ok=false;
                    break;
                }
                x=1;
            }
        }
        if(ok)return 0;
        for(int i=0;i<n-1;i+=2){
            if(s[i]!=s[i+1]){
                cnt++;
            }
        }
        return cnt;
    }
};