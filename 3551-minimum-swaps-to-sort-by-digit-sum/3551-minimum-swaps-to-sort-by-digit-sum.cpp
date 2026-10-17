class Solution {
public:
    static int digsum(int num){
        int sum=0;
        while(num>0){
            sum+=num%10;
            num/=10;
        }
        return sum;
    }
    int minSwaps(vector<int>& nums){
        int n=nums.size();
        vector<int>sorted=nums;
        auto lambda=[](int num1,int num2){
            int sum1=Solution::digsum(num1);
            int sum2=Solution::digsum(num2);
            if(sum1!=sum2){
                return sum1<sum2;
            }
            return num1<num2;
        };
        sort(sorted.begin(),sorted.end(),lambda);
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]=i;
        }
        int swaps=0;
        for(int i=0;i<n;i++){
            int exp=sorted[i];
            int act=nums[i];
            if(exp==act)continue;
            int j=freq[exp];
            swap(nums[i],nums[j]);
            freq[act]=j;
            freq[exp]=i;
            swaps++;
        }
        return swaps;
    }
};