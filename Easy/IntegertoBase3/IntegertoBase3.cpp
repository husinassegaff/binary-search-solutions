string solve(int n)
{
    string s = "";

    if (n == 0)
        return "0";

    while (n > 0)
    {
        s = to_string(n % 3) + s;
        n /= 3;
    }

    return s;
}