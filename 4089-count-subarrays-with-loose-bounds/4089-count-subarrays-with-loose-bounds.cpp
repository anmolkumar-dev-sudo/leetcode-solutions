class Solution{
public:
    long long countSubarrays(vector<int>&nums,int minK,int maxK){
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<minK || nums[i]>maxK)nums[i]=0;
        }
        long long sum=0,x=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                sum+=(x*(x+1))/2;
                x=0;
            }
            else{
                x++;
            }
        }
        sum+=(x*(x+1))/2;
        return sum;
    }
};