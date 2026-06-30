class Solution {
public:
    long long countGood(vector<int>& v, int k) {
        int n=v.size();
        unordered_map<int,int>freq;
        long long cnt=0;
        int x=0,j=0,p=0;
        for(int i=0;i<n;i++){
            if(freq.find(v[i])!=freq.end()){
                p+=freq[v[i]];
            }
            freq[v[i]]++;
            while(p>=k){
                cnt+=(n-i);
                freq[v[j]]--;
                p-=freq[v[j]];
                if(freq[v[j]]==0)freq.erase(v[j]);
                j++;
            }
    }
    return cnt;
}};