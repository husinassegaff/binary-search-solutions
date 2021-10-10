vector<string> solve(int n)
{
    vector<string> ans;
    string x = "Fizz", y = "Buzz", z = "FizzBuzz";
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
            ans.push_back(z);
        else if (i % 3 == 0)
            ans.push_back(x);
        else if (i % 5 == 0)
            ans.push_back(y);
        else
            ans.push_back(to_string(i));
    }

    return ans;
}