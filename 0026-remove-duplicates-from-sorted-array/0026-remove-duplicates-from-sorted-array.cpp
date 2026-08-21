class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int j=1,a=nums[j];
        for(int i=1;i<n;i++){
            if(nums[j-1]!=nums[i]){
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
    }
};