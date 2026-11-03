class Solution {
public:
    int maxConsecutiveAnswers(string s, int k) {
        int n=s.length();
        int j=0,f=0,maxif=INT_MIN;
        for(int i=0;i<n;i++){
            if(s[i]=='F')f++;
            while(f>k){
                if(s[j]=='F')f--;
                j++;
            }
        maxif=max(maxif,i-j+1);
        }
        j=0;
        int t=0,maxit=INT_MIN;
        for(int i=0;i<n;i++){
            if(s[i]=='T')t++;
            while(t>k){
                if(s[j]=='T')t--;
                j++;
            }
        maxit=max(maxit,i-j+1);
        }
        return max(maxif,maxit);
    }
};