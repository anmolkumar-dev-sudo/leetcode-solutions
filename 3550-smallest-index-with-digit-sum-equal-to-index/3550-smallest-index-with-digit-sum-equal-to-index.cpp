class Solution {
public:
    int digsum(int n){
        int sum=0;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        for(int i=n-1;i>=0;i--){
            if(i==digsum(nums[i]))mini=i;
        }
        return (mini==INT_MAX)? -1:mini;
    }
};