class Solution {
public:
    long long getDescentPeriods(vector<int>&v) {
        long long p=v.size();
        if(p==1)return 1;
        long long n=0;
        long long len=1;
        for(int i=1;i<p;i++){
            if(v[i-1]-v[i]==1)len++;
            else{
                n+=((len)*(len+1))/2;
                len=1;
            }
        }
        n+=(len*(len+1))/2;
        return n;
    }
};