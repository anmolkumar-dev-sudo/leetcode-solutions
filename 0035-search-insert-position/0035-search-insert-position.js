/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var searchInsert = function(nums, target) {
    let first  = 0;
    let end = nums.length-1;
    let ans = nums.length;
    while(first<=end){
        let mid = Math.floor((first + end)/2);
        if(target==nums[mid]){
            return mid;
        }
        else if(target>nums[mid]){
            first = mid+1;
            
        }
        else if( target < nums[mid]){
            end = mid-1;
            ans = mid;
        }
    }
    return ans;
};
