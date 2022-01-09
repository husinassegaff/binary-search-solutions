class Solution {
    solve(nums) {
        var ans = 0;
        var sorted = nums;
        console.log(sorted[1] + " and " + nums[1]);
        sorted = sorted.sort(function(a, b) {
            return a - b;
        });
        console.log(sorted[1] + " and " + nums[1]);

        for (var i = 0; i < nums.length; i++) {
            if (sorted[i] == nums[i]) {
                ans++;
                // console.log(sorted[i] + " and " + nums[i]);
            }
        }

        return ans;
    }
}