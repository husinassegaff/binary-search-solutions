class Solution:
    def solve(self, rooms, target):
        for i in range(len(rooms)):
            if target <= rooms[i]:
                return rooms[i]
        return -1
