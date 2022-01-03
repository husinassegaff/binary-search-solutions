class Solution {
    solve(rooms, target) {
        for(let i = 0; i < rooms.length; i++){
            if(target <= rooms[i]) return rooms[i];
        }

        return -1;
    }
}