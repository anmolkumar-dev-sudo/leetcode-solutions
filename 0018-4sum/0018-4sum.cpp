class Solution {
public:
struct VectorHash {
    size_t operator()(const vector<long long>& v) const {
        size_t seed = 0;
        for (long long x : v) {
            seed ^= hash<long long>{}(x) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
        }
        return seed;
    }
};

unordered_map<vector<long long>, int, VectorHash> s;
    vector<vector<int>> fourSum(vector<int>& nums, int t) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(i==j)continue;
                unordered_map<long long,int>freq;
                for(int k=j+1;k<n;k++){
                    if(i==k || j==k)continue;
                    if(freq.find((long long)t-nums[k]-nums[j]-nums[i])!=freq.end()){
                        vector<long long>v={nums[i],nums[j],nums[k],t-nums[k]-nums[j]-nums[i]};
                        sort(v.begin(),v.end());
                        s[v]++;
                    }
                    freq[nums[k]]++;
                }
            }
        }
        vector<vector<int>>ans;
        for(auto it:s){
            vector<int>v;
            for(int x:it.first){
                v.push_back(x);
            }
            ans.push_back(v);}
        return ans;
    }
};