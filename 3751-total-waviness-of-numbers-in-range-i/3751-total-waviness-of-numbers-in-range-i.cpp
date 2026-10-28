class Solution {
public:
    int calWavy(string s){
        int n=s.length();
        if(n<3)return 0;
        int cnt=0;
        for(int i=1;i<n-1;i++){
            int a=s[i-1]-'0';
            int b=s[i]-'0';
            int c=s[i+1]-'0';
            if(b>a && b>c)cnt++;
            else if(b<a && b<c)cnt++;
        }
        return cnt;
    }
    int totalWaviness(int num1, int num2) {
        int cnt=0;
        for(int i=num1;i<=num2;i++){
            cnt+=calWavy(to_string(i));
        }
        return cnt;
    }
};