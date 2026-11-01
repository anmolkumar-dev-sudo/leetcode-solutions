class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        long long sum=0,mini=LLONG_MAX;

        for(int i=0;i<n;i++){
            mini=min(mini,(long long)nums[i]);
        }
        for(int i=0;i<n;i++){
            sum+=abs(mini-nums[i]);
        }
        return sum;
    }
};