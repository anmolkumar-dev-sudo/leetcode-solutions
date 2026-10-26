class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>s;
        int cnt=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(i>0 && s.find(nums[i])!=s.end()){
                cnt+=abs(nums[i]-nums[i-1])+1;
                nums[i]=nums[i-1]+1;
            }
            s.insert(nums[i]);
        }
        return cnt;
    }
};