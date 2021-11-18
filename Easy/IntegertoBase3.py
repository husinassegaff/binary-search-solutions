class Solution:
    def solve(self, n):
        if n == 0:
            return '0'
        res = ''
        while n:
            res = str(n % 3) + res
            n //= 3
        return res
