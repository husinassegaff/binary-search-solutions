class Solution {
    solve(nums) {
        nums.sort(function(a, b){return a - b});

        let a = nums[0]*nums[1];
        let b = nums[nums.length-1]*nums[nums.length-2];

        return a > b ? a : b;
    }
}