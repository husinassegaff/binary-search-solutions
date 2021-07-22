int solve(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    return (nums[nums.size()-1] - nums[0]);
}