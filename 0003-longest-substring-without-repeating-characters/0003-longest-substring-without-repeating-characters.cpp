class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        unordered_map<char,int>freq;
        int j=0,maxi=0;
        for(int i=0;i<n;i++){
            freq[s[i]]++;
            while(freq[s[i]]>1){
                freq[s[j]]--;
                if(freq[s[j]]==0)freq.erase(s[j]);
                j++;
            }
            maxi=max(maxi,i-j+1);
        }
    return maxi;
    }
};