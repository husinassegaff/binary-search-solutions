class Solution:
    def solve(self, s):
        n = 0
        for i in range(len(s)):
            n = n * 3 + int(s[i])

        return n
