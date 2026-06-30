class Solution {
public:
    long long countSubarrays(vector<int>& v, int k) {
        int n=v.size();
        int maxi=0;
        for(int i=0;i<n;i++){
            maxi=max(maxi,v[i]);
        }
        long long cnt=0,j=0,CntMax=0;
        for(int i=0;i<n;i++){
            if(v[i]==maxi)CntMax++;
            while(CntMax >= k){
                cnt+=(n-i);
                if(v[j]==maxi)CntMax--;
                j++;
            }
        }
        return cnt;
    }
};