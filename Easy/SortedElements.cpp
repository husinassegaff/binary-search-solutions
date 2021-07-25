int solve(vector<int>& nums) {
    vector<int> temp = nums;
    int ans = 0;
    sort(temp.begin(), temp.end());
    for(int i = 0; i < nums.size(); i++){
        if(temp[i] == nums[i])
            ans++;
    }
    return ans;
}