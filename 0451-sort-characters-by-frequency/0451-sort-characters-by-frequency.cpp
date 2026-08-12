class Solution {
public:
    string frequencySort(string s) {
        int n=s.length();
        unordered_map<char,int>f;
        for(char c:s)f[c]++;
        priority_queue<pair<int,char>>p;
        for(auto it:f){
            p.push({it.second,it.first});
        }
        string ans="";
        while(!p.empty()){
            int x=p.top().first;
            char c=p.top().second;
            while(x--){
                ans+=c;
            }
            p.pop();
        }
        return ans;
    }
};