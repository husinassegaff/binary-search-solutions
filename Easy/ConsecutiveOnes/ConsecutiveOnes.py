class Solution:
    def solve(self, nums):
        check = 0
        for i in range(len(nums)):
            if nums[i] == 1 and check == 0:
                check += 1
                continue

            if nums[i-1] != 1 and nums[i] == 1 and check > 0:
                return False

        return True
