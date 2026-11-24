class Solution {
public:
    int binarySearch(vector<int>&v,int st,int en,int t){
        int n=v.size();
        int f=st,e=en;
        while(f<=e){
            int mid=f+(e-f)/2;
            if(v[mid]<t){
                f=mid+1;
            }
            else if(v[mid]>t)e=mid-1;
            else return mid;
        }
        return -1;
    }
    int search(vector<int>& nums, int t) {
        int n=nums.size();
        int idx=-1;
        int f=0,e=n-1;
        int ans=-1;
        while(f<=e){
            int mid=f+(e-f)/2;
            if(nums[mid]>nums[n-1]){
                idx=mid;
                f=mid+1;
            }
            else e=mid-1;
        }
        if(idx==-1){
            return binarySearch(nums,0,n-1,t);
        }
        int x=binarySearch(nums,0,idx,t);
        int y=binarySearch(nums,idx+1,n-1,t);
        if(x!=-1)return x;
        return y;
    }
};