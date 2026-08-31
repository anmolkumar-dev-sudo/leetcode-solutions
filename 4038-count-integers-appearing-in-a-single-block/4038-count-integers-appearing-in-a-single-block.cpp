class Solution {
public:
    int countSpecialIntegers(vector<int>&v) {
        int n=v.size();
        vector<int>freq(101,0);
        vector<int>blocks(101,0);
        for(int i=0;i<n;i++){
            freq[v[i]]++;
        }
        for(int i=0;i<n;i++){
            if(i==0 || v[i]!=v[i-1]){
                blocks[v[i]]++;
            }
        }
        int cnt=0;
        for(int i=0;i<blocks.size();i++){
            if(blocks[i]==1)cnt++;
        }
        return cnt;
    }

};