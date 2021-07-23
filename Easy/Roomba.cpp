bool solve(vector<string>& moves, int x, int y) {
    for(auto& i : moves){
        if(i.front() == 'N')
            y--;
        else if(i.front() == 'S')
            y++;
        else if(i.front() == 'E')
            x--;
        else if(i.front() == 'W')
            x++;
    }

    if(!x && !y)
        return true;
    
    return false;
}