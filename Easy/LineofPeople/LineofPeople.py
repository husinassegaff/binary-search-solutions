class Solution:
    def solve(self, n, a, b):
        if n - b >= a:
            return b + 1
        else: return n - a