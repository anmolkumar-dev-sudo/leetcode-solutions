class Solution {
public:
    bool palindrome(string &s,int i,int j){
        if(i>j)return true;
        if(s[i]!=s[j])return false;
        return palindrome(s,i+1,j-1);
    }
    string longestPalindrome(string s) {
        int n=s.length();
        string ans="";
        int maxi=0;
        for(int i=0;i<n;i++){
            string t="";
            for(int j=i;j<n;j++){
                t+=s[j];
                if(palindrome(t,0,t.length()-1)){
                    if(t.size()>maxi){
                        maxi=t.size();
                        ans=t;
                    }
                }
            }
        }
        return ans;
    }
};