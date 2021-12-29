class Solution:
    def solve(self, sentence):
        words = sentence.split()
        return ' '.join(words[::-1])
