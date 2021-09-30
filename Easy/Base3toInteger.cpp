int solve(string s)
{
    int power = s.length() - 1, ans = 0;

    for (int i = 0; i < s.length(); i++)
    {
        ans += pow(3, power) * (s[i] - '0');

        power--;
    }

    return ans;
}