int solve(int n)
{
    int temp = n, remain = 0;
    int ans = n;

    while (temp / 3 > 0)
    {
        remain = temp % 3;
        temp = temp / 3;
        ans += temp;
        temp += remain;
        remain = 0;
    }

    return ans;
}