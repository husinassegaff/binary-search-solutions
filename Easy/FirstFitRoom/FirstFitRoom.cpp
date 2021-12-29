int solve(vector<int>& rooms, int target) {
   
    for(int i = 0; i < rooms.size(); i++){
        if(target <= rooms[i])
            return rooms[i];
    }

    return -1;
}