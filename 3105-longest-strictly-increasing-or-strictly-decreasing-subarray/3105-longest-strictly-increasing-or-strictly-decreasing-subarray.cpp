class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int maxi1=1,maxi2=1;
        
        // increasing
        int len=1; 
        for(int i=0;i<n-1;i++){
            if(nums[i]<nums[i+1]){
                len++;
                maxi1=max(maxi1,len);
            }
            else len=1;
        }
        // decreasing
        len=1; 
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                len++;
                maxi1=max(maxi1,len);
            }
            else len=1;
        }
        return max(maxi1,maxi2);
    }
};