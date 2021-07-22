bool solve(int num) {

    if(num == 1)
        return true;

    vector<int> check;

    while(num!=0){
        check.push_back(num%10);
        num = num/10;
    }

    for(int j = 0; j < check.size()/2; j++){  
        if(check[j] != check[(check.size()-(j+1))])
            return false;
    }

    return true;
}