class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>freq;
        int j=0,maxi=INT_MIN;
        for(int i=0;i<n;i++){
           freq[nums[i]]++;
           while(freq[nums[i]]>k){
            freq[nums[j]]--;
            j++;
           }
            maxi=max(maxi,i-j+1);
        }
        return maxi;
    }
};