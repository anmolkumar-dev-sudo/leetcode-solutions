class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int n=nums.size();
        unordered_map<int,int>freq;
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(freq.find(t-nums[i])!=freq.end()){
                ans.push_back(freq[t-nums[i]]);
                ans.push_back(i);
                break;
            }
            freq[nums[i]]=i;
        }
        return ans;
    }
};