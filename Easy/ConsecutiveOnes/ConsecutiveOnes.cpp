bool solve(vector<int> &nums)
{
    int check = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1 && check == 0)
        {
            check++;
            continue;
        }
        if (nums[i - 1] != 1 && nums[i] == 1 && check > 0 && i > 0)
            return false;
    }

    return true;
}