class Solution {
public:
    int reverseDegree(string s) {
        int x=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            x+=(i+1)*abs((int)s[i]-123);
        }
        return x;
    }
};