bool solve(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    if(nums.size() % 2 == 1)
        return false;
    
    for(int i = 0; i < nums.size(); i+=2){
        if(nums[i] != nums[i+1])
            return false;
    }

    return true;
}