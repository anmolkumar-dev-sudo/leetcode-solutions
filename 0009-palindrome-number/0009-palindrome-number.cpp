class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        long long p=0;
        int temp=x;
        while(x>0){
            p*=10;
            p+=x%10;
            x/=10;
        }
        return p==temp;
    }
};