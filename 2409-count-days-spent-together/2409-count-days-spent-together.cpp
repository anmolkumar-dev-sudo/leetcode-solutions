class Solution {
public:
    int days(string s,vector<int>&year){
        int n=12;
        int m=stoi(s.substr(0,2));
        int days=stoi(s.substr(3,2));
        for(int i=0;i<m-1;i++){
            days+=year[i];
        }
        return days;
    }
    int countDaysTogether(string aa, string la, string ab, string lb) {
        vector<int>year={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int a=days(aa,year);
        int b=days(la,year);
        int c=days(ab,year);
        int d=days(lb,year);
        if(min(b,d)-max(a,c)+1<0)return 0;
        return min(b,d)-max(a,c)+1;
    }
};