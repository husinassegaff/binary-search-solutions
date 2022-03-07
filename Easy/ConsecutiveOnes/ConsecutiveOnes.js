class Solution {
    solve(nums) {
        let check = 0

        for (let i = 0; i < nums.length; i++) {
            if (nums[i] == 1 && check == 0) {
                check++
                continue
            }

            if (nums[i - 1] != 1 && nums[i] == 1 && check > 0 && i > 0) {
                return false
            }
        }

        return true
    }
}