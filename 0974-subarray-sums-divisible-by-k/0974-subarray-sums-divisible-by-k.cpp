#define ll long long
class Solution {
public:
    int subarraysDivByK(vector<int>& arr, int k) {
        ll n=arr.size();
        vector<ll>pref(n+1,0);
        unordered_map<ll,ll>freq;
        for(ll i=0;i<n;i++){
            pref[i+1]=pref[i]+arr[i];
        }
        ll evenSubarrays=0;
        for(ll i=0;i<=n;i++){
            ll rem=pref[i]%k;
            if(rem<0)rem+=k;
            if(freq.find(rem)!=freq.end()){
                evenSubarrays+=freq[rem];
            }
            freq[rem]++;
        }
        return (evenSubarrays)%1000000007;
    }
};