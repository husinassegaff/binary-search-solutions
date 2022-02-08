class Solution {
    solve(nums) {
        let ans = 0;
        for (let i = 0; i < nums.length; i++) {
            if ((nums[i] >= 10 && nums[i] <= 99) || (nums[i] >= 1000 && nums[i] <= 9999) || (nums[i] >= 100000 && nums[i] <= 999999) || (nums[i] >= 10000000 && nums[i] <= 99999999) || (nums[i] >= 1000000000 && nums[i] <= 9999999999))
                continue;
            else
                ans++;
        }

        return ans;
    }
}