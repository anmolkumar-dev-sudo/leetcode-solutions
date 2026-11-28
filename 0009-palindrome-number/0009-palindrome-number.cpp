class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        string p=to_string(abs(x));
        string s=p;
        reverse(p.begin(),p.end());
        return p==s;
    }
};