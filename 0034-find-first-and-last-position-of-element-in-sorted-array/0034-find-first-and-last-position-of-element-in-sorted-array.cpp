class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int t) {
        int st = -1, end = -1;
        int n = nums.size();
        int f = 0, e = n - 1;
        while (f <= e) {
            int mid = f + (e - f) / 2;
            if (nums[mid] == t) {
                st = mid;
                e = mid - 1;
            }
            else if (nums[mid] < t) f = mid + 1;
            else e = mid - 1;
        }
        f = 0, e = n - 1;
        while (f <= e) {
            int mid = f + (e - f) / 2;
            if (nums[mid] == t) {
                end = mid;
                f = mid + 1;
            }
            else if (nums[mid] < t) f = mid + 1;
            else e = mid - 1;
        }
        return {st, end};
    }
};