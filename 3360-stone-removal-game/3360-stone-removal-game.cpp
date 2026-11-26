class Solution {
public:
    bool canAliceWin(int n) {
        int x=10;
        int i=0;
        while(n>=0){
            if(i%2==0){
                n-=x,
                x--;
                i++;
                if(n<0)return false;
            }
            else{
                n-=x;
                x--;
                i++;
                if(n<0)return true;
            }
        }
        return false;
    }
};