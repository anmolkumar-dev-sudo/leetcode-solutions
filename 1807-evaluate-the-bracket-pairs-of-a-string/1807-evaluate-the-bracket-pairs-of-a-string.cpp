class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        int n=s.length(),m=knowledge.size();
        string ans="";
        unordered_map<string,string>freq;
        for(int i=0;i<m;i++){
            freq[knowledge[i][0]]=knowledge[i][1];
        }
        string p="";
        for(int i=0;i<n;i++){
            ans="";
            if(s[i]=='('){
                while(s[i]!=')'){
                    i++;
                    if(s[i]==')')break;
                    ans+=s[i];
                }
                if(freq.find(ans)==freq.end())p+='?';
                else p+=freq[ans];    
            }
            else p+=s[i];
        }
        return p;
    }
};