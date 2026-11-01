class Solution{
public:
    int minOperations(vector<int>& nums,vector<int>& loc,int k){
        int n=nums.size();
        int cnt=0;
        auto felnorqavi=make_pair(nums,loc);

        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1-i;j++){
                if(nums[j]>nums[j+1]){
                    if(loc[j]==1){
                        if(k<=0)return -1;
                        loc[j]=0;
                        cnt++,k--;
                    }
                    if(loc[j+1]==1){
                        if(k<=0)return -1;
                        loc[j+1]=0;
                        cnt++,k--;
                    }
                    swap(nums[j],nums[j+1]);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};