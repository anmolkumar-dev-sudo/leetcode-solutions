class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>freq;
        int cnt=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(i>0 && freq.find(nums[i])!=freq.end()){
                cnt+=abs(nums[i]-nums[i-1])+1;
                nums[i]=nums[i-1]+1;
            }
            freq[nums[i]]++;
        }
        return cnt;
    }
};