vector<string> solve(int n)
{
    vector<string> ans;
    string x = "clap";
    int check = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 || i % 10 == 3 || i % 10 == 6 || i % 10 == 9)
        {
            ans.push_back(x);
            continue;
        }

        string temp = to_string(i);

        for (int j = 0; j < temp.length(); j++)
        {
            if (temp[j] == '3' || temp[j] == '6' || temp[j] == '9')
            {
                check = 1;
                break;
            }
        }

        if (check == 1)
        {
            ans.push_back(x);
            check = 0;
        }
        else
            ans.push_back(to_string(i));
    }

    return ans;
}