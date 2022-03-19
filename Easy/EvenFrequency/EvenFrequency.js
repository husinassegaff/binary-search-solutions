class Solution {
    solve(nums) {
        nums.sort()

        if(nums.length % 2 == 1) return false

        for(let i = 0; i < nums.length - 1; i += 2) {
            if(nums[i] != nums[i + 1]) return false
        }

        return true
    }
}