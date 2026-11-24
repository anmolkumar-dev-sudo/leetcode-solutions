class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n=nums.size();
        int maxi=0;
        for(int i=0;i<n;i++){
            int sum=0,lcm=nums[i],gcd=nums[i];
            long long prod=1;
            for(int j=i;j<n;j++){
                prod*=nums[j];
                if (prod > 25200) break;
                gcd=__gcd(gcd,nums[j]);
                lcm=(lcm*nums[j])/(__gcd(lcm,nums[j]));
                if(prod==lcm*gcd)maxi=max(maxi,j-i+1);
            }
        }
        return maxi;
    }
};