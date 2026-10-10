class Solution {
public:
    bool checkPalindrome(string s,int l,int r){
        int n=s.length();
        int i=l,j=r;
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++,j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int n=s.length();
        int i=0,j=n-1;
        int c=0;
        bool ans=true;
        while(i<j){
            if(s[i]!=s[j]){
                return checkPalindrome(s,i+1,j) || checkPalindrome(s,i,j-1);
            }
            else i++,j--;
        }
        return ans;
    }
};