class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int idx=-1;
        int f=0,e=n-1;
        while(f<=e){
            int mid=f+(e-f)/2;
            if(nums[mid]>nums[n-1]){
                idx=mid;
                f=mid+1;
            }
            else e=mid-1;
        }
        if(idx==-1)return nums[0];
        return nums[idx+1];
    }
};