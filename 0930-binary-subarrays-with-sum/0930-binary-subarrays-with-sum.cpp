class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>freq;
        vector<int>pref(n+1,0);
        for(int i=0;i<n;i++){
            pref[i+1]=pref[i]+nums[i];
        }
        int cnt=0;
        for(int i=0;i<=n;i++){
            if(freq.find(pref[i]-k)!=freq.end()){
                cnt+=freq[pref[i]-k];
            }
            freq[pref[i]]++;
        }
        return cnt;
    }
};