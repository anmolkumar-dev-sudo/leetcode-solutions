class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int maxi1=1,maxi2=1;
        
        // increasing 
        for(int i=0;i<n;i++){
            int len=1;
            for(int j=i;j<n-1;j++){
                if(nums[j]<nums[j+1]){
                    len++;
                    maxi2=max(maxi2,len);
                }
                else{
                    len=1;
                }
            }
        }
        // decreasing
        for(int i=0;i<n;i++){
            int len=1;
            for(int j=i;j<n-1;j++){
                if(nums[j]>nums[j+1]){
                    len++;
                    maxi2=max(maxi2,len);
                }
                else{
                    len=1;
                }
            }
        }
        return max(maxi1,maxi2);
    }
};