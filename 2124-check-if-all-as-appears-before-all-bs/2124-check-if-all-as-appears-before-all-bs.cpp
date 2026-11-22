class Solution {
public:
    bool checkString(string s) {
        int idxb=-1;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='b'){
                idxb=i;
                break;
            }
        }
        if(idxb==-1)return true;
        for(int i=idxb;i<n;i++){
            if(s[i]=='a')return false;
        }
        return true;
    }
};