int solve(int n)
{
    string s = to_string(n);

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '3')
        {
            s[i] = '3';
            break;
        }
    }

    return stoi(s);
}