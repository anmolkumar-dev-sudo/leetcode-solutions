class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int x=nums[n-1];
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=abs(x-nums[i]);
        }
        return sum;
    }
};