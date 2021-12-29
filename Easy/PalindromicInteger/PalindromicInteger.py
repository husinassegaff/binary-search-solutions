class Solution:
    def solve(self, n):
        n = str(n)
        return n == n[::-1]
