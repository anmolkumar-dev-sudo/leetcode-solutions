class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        vector<long long>pref(n+1,0);
        for(int i=0;i<n;i++){
            pref[i+1]=pref[i]+nums[i];
        }
        unordered_map<long long,pair<int,int>>freq;
        for(int i=0;i<n+1;i++){
            if(freq.find(pref[i]%k)!=freq.end() && abs(freq[pref[i]%k].first - i)>=2){
                return true;
            }
            if(freq.find(pref[i]%k)==freq.end()){
                freq[pref[i]%k].first=i;
            }
            freq[pref[i]%k].second++;
        }
        return false;
    }
};