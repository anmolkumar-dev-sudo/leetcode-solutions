class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums[i]=abs(nums[i]);
        }
        sort(nums.begin(),nums.end(),greater<int>());
        int x=(n+1)/2;
        long long sum=0;
        for(int i=0;i<x;i++){
            sum+=nums[i]*nums[i];
        }
        for(int i=x;i<n;i++){
            sum-=nums[i]*nums[i];
        }
        return sum;
    }
};