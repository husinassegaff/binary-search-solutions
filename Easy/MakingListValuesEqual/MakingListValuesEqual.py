class Solution:
    def solve(self, nums):
        nums.sort()
        return (nums[len(nums)-1] -nums[0])