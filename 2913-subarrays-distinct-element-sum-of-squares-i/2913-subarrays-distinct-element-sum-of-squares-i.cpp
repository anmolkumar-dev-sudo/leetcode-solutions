class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            unordered_map<int,int>freq;
            for(int j=i;j<n;j++){
                freq[nums[j]]++;
                sum+=(freq.size())*(freq.size());
            }
        }
        return sum;
    }
};