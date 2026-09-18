class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        if(n==0)return n;
        unordered_map<char,int>freq;
        int j=0,maxlen=-1;
        for(int i=0;i<n;i++){
            freq[s[i]]++;
            while(freq[s[i]]>1){
                freq[s[j]]--;
                j++;
            }
            maxlen=max(maxlen,i-j+1);
        }
        return maxlen;
    }
};