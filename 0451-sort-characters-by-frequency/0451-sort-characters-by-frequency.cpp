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
            while(x--){
                ans+=p.top().second;
            }
            p.pop();
        }
        return ans;
    }
};