class Solution {
public:
    int sum(string s){
        int n=s.length();
        int sum=0;
        for(int i=0;i<n;i++)sum+=(s[i]-'0');
        return sum;
    }
    string digitSum(string s, int k) {
        int n=s.length();
        while(s.length()>k){
            string t="",p="";
            for(int i=0;i<s.length();i+=1){
                if(i==0 || i%k!=0)t+=s[i];
                else{
                    if(t!="")p+=to_string(sum(t));
                    t="";
                    t+=s[i];
                }
            }
            p+=to_string(sum(t));
            s=p;
        }
        return s;
    }
};