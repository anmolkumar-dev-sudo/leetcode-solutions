class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int t) {
        int n=nums.size();
        vector<int>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]==t)ans.push_back(i);
        }
        return ans;
    }
};