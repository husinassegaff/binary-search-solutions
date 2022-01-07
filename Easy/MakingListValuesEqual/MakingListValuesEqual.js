class Solution {
    solve(nums) {
        nums.sort();
        return (nums[nums.length-1] - nums[0]);
    }
}