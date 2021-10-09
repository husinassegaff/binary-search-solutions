int solve(vector<int> &nums)
{
    sort(nums.begin(), nums.end());

    if (nums.size() == 0)
        return 0;

    int temp = 0, ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == nums[i + 1] && i < nums.size() - 1)
        {
            if (temp == 0)
                temp += 2;
            else if (temp > 0)
                temp++;
        }

        else if (nums[i] != nums[i + 1] && i < nums.size() - 1)
        {
            if (ans < temp)
                ans = temp;

            temp = 0;
        }

        else if (i == nums.size() - 1 && nums[i] == nums[i - 1] && ans < temp)
            ans = temp;

        else if (i == nums.size() - 1 && nums[i] != nums[i - 1] && ans == 0)
            return 1;
    }

    if (temp == 0 && ans == 0)
        return 1;

    return ans;
}